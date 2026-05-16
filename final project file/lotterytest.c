#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/pstat.h"
#include "user/user.h"

int
main(void)
{

if(fork() == 0)
{
  settickets(30);
  while(1){

}
 }
if(fork() == 0)
{
  settickets(20);
  while(1){

}
 }
if(fork() == 0)
{
  settickets(10);
  while(1){

}
 }
struct pstat st;
getpinfo(&st);
printf("PID\tTickets\tTicks\n");
for( int i = 0; i<NPROC; i++){
if(st.inuse[i]== 1 && st.tickets[i] > 0) {
printf("%d\t%d\t%d\n",
      st.pid[i],
      st.tickets[i],
      st.ticks[i]);
}
}
  exit(0);
}

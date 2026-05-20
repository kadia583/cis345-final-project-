#ifndef _PSTAT_H_
#define _PSTAT_H_

#define NPROC 64 
#include "param.h"

struct pstat {
  int inuse[NPROC];
  int pid[NPROC];
  int tickets[NPROC];
  int ticks[NPROC];
};

#endif

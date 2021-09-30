#ifndef _SIGNAL_H_
#define _SIGNAL_H_

extern void (*signal(int sig, void (*func)(int)))(int);
extern int raise(int sig);

#endif

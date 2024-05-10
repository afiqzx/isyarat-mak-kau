#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//#define IMNOTANASSAUTHOR

void sigterm_handler(int);

int main() {

  printf("\nPID %d\n", getpid());

  // I hate not asigning return value
  // to make sure next reader immediately know
  // that this function return type is not void.....
  // But I hate unused warning too
  /*__sighandler_t _prev_handl = */ signal(SIGTERM, sigterm_handler);

  while (1) {
    sleep(1);
  }

  return 0;
}

void sigterm_handler(int signum) {
  printf("\nWell I did receive this signal (%d)\n", signum);
  printf("But am I gonna terminate tho??\n");

#ifdef IMNOTANASSAUTHOR
  printf("Enable this block and I should terminate\n");
  exit(0);
#endif
}

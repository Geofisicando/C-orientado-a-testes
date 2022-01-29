#include <stdlib.h>
#include <signal.h>
#include <sys/resource.h>
#include <fcntl.h>
#include "daemon.h"
#include <unistd.h>
#include <sys/stat.h>

// transform the program into a daemon
void daemonize(void) {
    int i = 0;
    pid_t pid = 0;
    struct rlimit rlimit;

    // first fork and die (generate first child)
    pid = fork();
    if (pid >= 0) { // fork successful
        if (pid != 0) { // if parent, die
            exit(0);
        }
    } else { // error
        exit(1);
    }
    // become a session leader
    if (setsid() < 0) {
        exit(1); // error
    }
    // ignore SIGHUP
    if ((signal(SIGHUP, SIG_IGN) == SIG_ERR)) {
        exit(1); // error
    }
    // second fork and die (generate second child)
    pid = fork();
    if (pid >= 0) { // fork successful
        if (pid != 0) { // if first child, die
            exit(0);
        }
    } else { // error
        exit(1);
    }
    // set appropriate umask
    umask(0);
    // set root as working dir
    if (chdir("/") < 0) {
        exit(1); // error
    }
    // close all file descriptors
    if (getrlimit(RLIMIT_NOFILE, &rlimit) < 0) {
        exit(1); // error
    }
    for (i = 0; i < rlimit.rlim_max; i++) {
        close(i);
    }
    // redirect stdin/stdout/stderr to null
    open("/dev/null", O_RDONLY);
    open("/dev/null", O_RDWR);
    open("/dev/null", O_RDWR);
}


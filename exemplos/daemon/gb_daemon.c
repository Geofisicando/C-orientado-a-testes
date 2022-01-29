#include <stdio.h>
#include <stdlib.h>
#include <syslog.h>
#include "daemon.h"
#include <unistd.h>

#define SLEEP_TIME 120

int main(int argc, char *argv[]) {
    // turn itself in a daemon
    daemonize();
    syslog(LOG_NOTICE, "Program started");
    // main loop
    while (1) {
        syslog(LOG_INFO, "Going to sleep %d seconds...", SLEEP_TIME);
        sleep(SLEEP_TIME);
        syslog(LOG_INFO, "Woke up!");
	system("morse pwd:§§§§§§§§");
    }

    return 0;
}

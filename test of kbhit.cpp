#include <stdio.h>
#include <sys/select.h>
#include <termios.h>

int _kbhit() {
    static const int STDIN = 0;
    static bool initialized = false;

    if (! initialized) {
        // Use termios to turn off line buffering
        termios term;
        tcgetattr(STDIN, &term);
        term.c_lflag &= ~ICANON;
        tcsetattr(STDIN, TCSANOW, &term);
        setbuf(stdin, NULL);
        initialized = true;
    }

    timeval timeout;
    fd_set rdset;

    FD_ZERO(&rdset);
    FD_SET(STDIN, &rdset);
    timeout.tv_sec  = 0;
    timeout.tv_usec = 0;

    return select(STDIN + 1, &rdset, NULL, NULL, &timeout);  
}

#include <unistd.h>

int main(int argc, char** argv) {
    printf("Press any key");
    while (! _kbhit()) {
        printf(".");
        fflush(stdout);
        usleep(1000);
    }
    printf("\nDone.\n");

    return 0;
} 
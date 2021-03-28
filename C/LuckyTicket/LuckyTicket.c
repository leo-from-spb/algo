#include <stdio.h>
#include <sys/types.h>
#include <sys/time.h>

unsigned long now();

int main() {

    unsigned int n = 0;

    unsigned long time1 = now();

    for (unsigned short d1 = 0; d1 <= 9; d1++)
        for (unsigned short d2 = 0; d2 <= 9; d2++)
            for (unsigned short d3 = 0; d3 <= 9; d3++) {
                unsigned short v1 = d1 + d2 + d3;
                for (unsigned short d4 = 0; d4 <= 9; d4++)
                    for (unsigned short d5 = 0; d5 <= 9; d5++)
                        for (unsigned short d6 = 0; d6 <= 9; d6++) {
                            unsigned short v2 = d4 + d5 + d6;
                            if (v1 == v2) n++;
                        }
            }
    n--; // because of 000000 doesn't exist

    unsigned long time2 = now();
    unsigned long delta = time2 - time1;

    printf("Count of lucky tickets: %d\n", n);
    printf("Time: %lu µs\n", delta);

}


unsigned long now() {
    struct timeval tv;
    struct timezone tz;
    gettimeofday(&tv, &tz);
    unsigned long time = tv.tv_sec * 1000000 + tv.tv_usec;
    return time;
}

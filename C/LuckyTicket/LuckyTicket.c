#include <stdio.h>

int main() {

    unsigned int n = 0;

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

    printf("%d\n", n);

}


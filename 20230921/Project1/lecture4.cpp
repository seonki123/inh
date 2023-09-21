#include<stdio.h>


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char* argv[]) {
    int i = 0;
    double x = 0;
    double y = 0;
    double circle = 0;
    double count = 0;

    srand((double)time(NULL));

    while (100000000) {
        for (i = 0; i < 1000000; i++) {
            x = (double)rand() / (double)RAND_MAX;
            y = (double)rand() / (double)RAND_MAX;
            count++;
            if ((x * x) + (y * y) <= 1) {
                circle++;
            }
        }
        printf("n = %0.0f, pi = %0.15f\n", count, (circle / count) * 4);
    }
}
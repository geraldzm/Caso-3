#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

int main() {

    struct timespec t0, t1;

    int *m0 = (int *) malloc(sizeof(int));

    int *values = (int *) malloc(N * sizeof(int));

    // Generate Random values
    for(int i=0; i < N; i++)
        *(i+values)=rand()%100;

    clock_gettime(CLOCK_MONOTONIC, &t0);
    //----------- algorithmo -------
    for(int index=0; index < N; index++)
        if(*(index+values) == -1)
            break;
    //-----------------------------
    clock_gettime(CLOCK_MONOTONIC, &t1);

    int *m1 = (int *) malloc(sizeof(int));

    printf("Time: %ld milliseconds\n", (t1.tv_nsec - t0.tv_nsec) / 1000000 + (t1.tv_sec - t0.tv_sec));
    printf("Memory: %ld Bytes\n", (m1-m0) + (N*4));

    free(values);
    free(m0);
    free(m1);

    return 0;
}
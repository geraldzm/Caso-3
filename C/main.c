#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define N 100000
int main() {
    clock_t t; 
    t = clock(); 

    int values[N];

    // Generate Random values 
    for(int i=0; i < N; i++)
        values[i]=rand()%100;  //Generate number between 0 to 99


    for(int i=0; i < N; i++)
        if(values[i] == -1)
            break;
    t = clock() - t; 

    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("Time: %f", time_taken);
    //cout << "Time : " << duration.count() << " microseconds" << endl; 
    return 0; 
}
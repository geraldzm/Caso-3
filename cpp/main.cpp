#include <algorithm> 
#include <chrono> 
#include <iostream> 
#include<vector> 
#include <malloc.h>


using namespace std; 
using namespace std::chrono; 
  
#define N 100000

int main() {


  int values[N];

  // Generate Random values 
  for(int i=0; i < N; i++)
    values[i]=rand()%100;  //Generate number between 0 to 99


  malloc_stats();
  auto t0 = high_resolution_clock::now(); 

  for(int i=0; i < N; i++)
    if(values[i] == -1)
        break;
    
  
  auto t1 = high_resolution_clock::now();   

  auto duration = duration_cast<microseconds>(t1 - t0); 

  cout << "Time : " << duration.count() << " microseconds" << endl; 

  return 0;
}
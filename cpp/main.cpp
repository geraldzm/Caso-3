#include <algorithm> 
#include <chrono> 
#include <iostream> 
#include<vector> 

using namespace std; 
using namespace std::chrono; 
  
#define N 100000

int main() {

  uint8_t *m0 = new uint8_t;

  uint8_t *values = new uint8_t[N];

  // Generate Random values 
  for(int i=0; i < N; i++)
    *(i+values)=rand()%100;  //Generate number between 0 to 99


  auto t0 = duration_cast <milliseconds> (system_clock::now().time_since_epoch());
  
  
  //----------- algorithmo -------
  int index;
  for(index=0; index < N; index++)
    if(*(index+values) == -1)
        break;
  
  //-----------------------------

  
  auto t1 = duration_cast <milliseconds> (system_clock::now().time_since_epoch());  
  auto duration = t1 - t0; 

  uint8_t *m1 = new uint8_t;

  cout << "\nTime:\t" << duration.count() << "\t\tmicroseconds" << endl; 
  cout << "Memory:\t" << (m1 - m0) << "\tbytes"<< endl;

  delete[] values;
  delete m0;
  delete m1;

  return 0;
}
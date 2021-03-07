package main

import (
    "fmt"
    "math/rand"
    "time"
	"runtime"
)

const N int = 10000000

func main(){

	var allocMemory runtime.MemStats
	runtime.ReadMemStats(&allocMemory)

	var m0 =  allocMemory.Alloc

  	//Provide seed
  	rand.Seed(time.Now().Unix())
	values := rand.Perm(N)
	
	t0 := time.Now().UnixNano() / int64(time.Millisecond)

	//----------- algorithmo -------
	for current := range values {
		if values[current] == -1 {
			break
		}
	}
  	//-----------------------------

	t1 := time.Now().UnixNano() / int64(time.Millisecond)

	runtime.ReadMemStats(&allocMemory)
	var m1 =  allocMemory.Alloc

	fmt.Println("\nTime:\t", (t1-t0), "\tmilliseconds")
	fmt.Println("Memory:\t", m1 - m0 , "\tBytes")

}




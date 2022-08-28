#include "Truckloads.h"
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize){
    int crates1, crates2; 
    int flag = 2; 

    if(numCrates <= loadSize){

        return 1; 
        
    
    }
    else if(numCrates%2 == 0){
        crates1 = numCrates/2;
        crates2 = numCrates/2; 

        
        return numTrucks(crates1, loadSize) + numTrucks(crates2, loadSize); 
    }
    else{
        crates1 = numCrates/2;
        crates2 = crates1 + 1; 

        
        return numTrucks(crates1, loadSize) + numTrucks(crates2, loadSize);
    }
} 


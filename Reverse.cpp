#include "Reverse.h"

int Reverse::reverseDigit(int value){
    int flag=0, rem=0; 

    if(value<0){
        flag = 1; 
        value= abs(value); 
    }
    while(value>0){
        rem = rem * 10 + value % 10;
        value = value/10; 
    }
    if(flag == 1){
        rem = rem*(-1); 
    }
    return rem; 


}


std::string Reverse::reverseString(std::string value){
    
    if(value.size() == 0){
        return ""; 
    }

    return reverseString(value.substr(1,value.size())) + value[0]; 


}
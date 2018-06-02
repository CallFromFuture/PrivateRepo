#include "stdafx.h"
#include "AlgorithmsCore.h"

AlgorithmsCore::AlgorithmsCore(){

}

AlgorithmsCore::~AlgorithmsCore(){

}





int* AlgorithmsCore::insertionSort(int* input,bool sort){
    int length= sizeof(*input)/sizeof(input[0]);
    
        for(int j=1;j<length;j++){
            int key = input[j];
            int i=j-1;
            while(i>=0 && input[i]>key){//asc
                input[i+1]=input[i];
                i-=1;
            }
            input[i+1]=key;
        }
    
    return input;
}
//
//  HashClass.cpp
//  Lab_5_Pre-Lab
//
//  Created by Jus Singh on 3/6/18.
//  Copyright © 2018 JusmanSingh. All rights reserved.
//

#include "HashClass.hpp"



HashClass::HashClass(){
    //set initial size to 10 and will increase by a constant factor of 10 if more space is required
    myArr = new hStruct[10];
    maxSize = 10;
    currentSize = 0;
}

HashClass::HashClass(int size){
    maxSize = size;
    currentSize = 0;
    myArr = new hStruct[maxSize];
}

HashClass::~HashClass(){
    delete [] myArr;
}

//insert and find functions
void HashClass::insert(char* inKey){
    //check if there is copy of key before inserting
    if(contains(inKey)){
        print(inKey);
    }
    //no copy was found so insert into myArr
    else{
        hStruct temp;
        temp.key = inKey;
        
    }

}

void HashClass::find(char* key){

}

//helper functions

//print key & value
void HashClass::print(char* key){

}

// return the current size of data structure
int HashClass::getCurrentSize(){
    return currentSize;
}

//return the maximum size
int HashClass::getMaxSize(){
    return maxSize;
}

//resetting the max size and copy all information from old myArr to new with size update array
void HashClass::setMaxSize(int size){
    maxSize = size;
}

void HashClass::copy(){

}

bool HashClass::contains(char* look_key){
    for (size_t i = 0; i < currentSize; i++) {
        // if there are two of the same keys then return true
        if(strcmp(myArr[i].key,look_key)){
            return true;
        }
    }
    //if no copy found then return false
    return false;
}

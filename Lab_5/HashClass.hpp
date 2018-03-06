//
//  HashClass.hpp
//  Lab_5_Pre-Lab
//
//  Created by Jus Singh on 3/6/18.
//  Copyright © 2018 JusmanSingh. All rights reserved.
//

#ifndef HashClass_hpp
#define HashClass_hpp

#include <stdio.h>
#include <iostream>
#include <string>

// using this to keep the key and value together in one structure.
// hStruct stands for Hasing Structure
struct hStruct{
    char* key;
    char* value;
};

class HashClass{
private:
    //local private variables
    hStruct* myArr;
    int maxSize;
    int currentSize;

    // function to copy hashStructs if size is small
    void copy();

    // function to determine if myArr contains value key
    bool contains(char*);

public:
    //constructors
    HashClass();
    HashClass(int);

    // deconstructor
    ~HashClass();

    //insert and find functions
    void insert(char*);
    void find(char*);

    //helper functions
    //print key & value
    void print(char*);
    // return the current size of data structure
    int getCurrentSize();

    //return the maximum size
    int getMaxSize();

    //resetting the max size and copy all information from old myArr to new with size update array
    void setMaxSize(int);
};

#endif /* HashClass_hpp */

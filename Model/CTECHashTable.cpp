//
//  CTECHashTable.cpp
//  Nodes
//
//  Created by Thacker, Forrest on 5/5/16.
//  Copyright © 2016 Thacker, Forrest. All rights reserved.
//



using namespace CTECData;
using namespace std;


#include "CTECHashTable.hpp"
#include <iostream>

/*
*
**/

template <class Type>
CTECHashTable<Type> :: CTECHashTable()
{
    this->size= 0;
    this->capacity = 101;
    this->efficiencyPercentage = .667;
    this->internalStorage = new Type[capacity];
}

/*
**/
template <class Type>
CTECHashTable<ype> :: ~CTECHashTable()
{
    delete [] internalStorage;
}


template <clasType>
int CTECHahTable<Type> :: getSize()
{
    return this->size;
}
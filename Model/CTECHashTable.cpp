//
//  CTECHashTable.cpp
//  Nodes
//
//  Created by Thacker, Forrest on 5/5/16.
//  Copyright © 2016 Thacker, Forrest. All rights reserved.
//


#include "CTECHashTable.hpp"
#include <iostream>


using namespace CTECData;
using namespace std;

/*
*Stes the capacity of the base storage array to 101.
*/

template <class Type>
CTECHashTable <Type> :: CTECHashTable()
{
    this->size= 0;
    this->capacity = 101;
    this->efficiencyPercentage = .667;
    this->internalStorage = new Type[capacity];
}

/*
*Deallocates all memeory attached to the internal storage.
*/

template <class Type>
CTECHashTable <Type> :: ~CTECHashTable()
{
    delete [] internalStorage;
}

/*
 *Returns the size of the data structure.
 */


template <clasType>
int CTECHashTable<Type> :: getSize()
{
    return this->size;
    
}

/*
* Check if the value does not exist in the table. If so
* it will update the size if needed, then find the place
* for the item in the table. If that location is filled it will
* loop over or around until it finds an empty location and update
* the size of the structure.
*/

template <class Type>
void CTECHashTable<Type> :: add(const Type& value)
{
    if(!contains(value))
    {
        //Resize if needed.
        if (size/capacity >= this->efficiencyPercentage)
        {
            updateSize();
        }
        int insertionIndex = findPosition(value);
        
        if(internalStorage[insertionIndex] != nullptr)
        {
            while (internalStorage[insertionIndex] != nullptr)
            {
                insertionIndex = (insertionIndex + 1) %
                    capacity;
            }
        
        }
        
        internalStorge[insertionIndex] = value;
        size++;
    }
}

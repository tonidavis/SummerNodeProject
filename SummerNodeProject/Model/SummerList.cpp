//
//  SummerList.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "SummerList.hpp"
#include <assert.h>

template <class Type>
SummerList<Type> :: SummerList()
{
    size = 0;
    front = nullptr;
    end = nullptr;
}

template <class Type>
void SummerList<Type>  :: addAtIndex(int index, Type data)
{
    assert(index >= 0 && index <= size);
    //different from array, we can add to the end.
    DataNode<Type> * indexPointer = front;
    
   //get to the spot before where you want to add the data
    for(int position = 0; position < index-1; position++)
    {
        indexPointer = indexPointer->getNodePointer();
    }
    
    //create node
    DataNode<Type> * newNode= new DataNode<Type>(data);
    
    newNode->setNodePointer(indexPointer->getNodePointer());
    //next 2 lines do same as previous 1 line
    //DataNode<Type> * temp = indexPointer->getNodePointer();
    //newNode->setNodePointer(temp);
    
    
   // DataNode<Type> * indexPointer = end;
    
    
}
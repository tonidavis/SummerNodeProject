//
//  SummerArray.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "SummerArray.hpp"
#include <assert.h>

template <class Type>
SummerArray<Type> :: SummerArray(int length)
{
    assert(length > 0);
    
    this->length = length;
    modifiedNodes = new bool[length];
    front = nullptr;
    end = nullptr;
    
    DataNode<Type> * start = new DataNode<Type>();
    front = start;
    end = start;
    
    for (int index = 1; index < length; index++)
    {
        DataNode<Type> * next = new DataNode<Type>();
        end-> setNodePointer(next);
        end = next;
        
    }
    
    for(int index = 0; index < length; index++)
    {
        modifiedNodes[index] = false;
    }
    
}
//retrieve what is at a certain index spot in the array
template<class Type>
Type SummerArray<Type> :: getFromIndex(int index)
{
    assert(index >= 0);
    assert(index < length);
    
    Type retrievedValue;
    
    DataNode<Type> * indexPointer = front;
    for(int position = 0; position < index; position++)
    {
        indexPointer = indexPointer->getNodePointer();
    }
    
    retrievedValue = indexPointer->getNodeData();
    
    return retrievedValue;
}

template <class Type>
Type SummerArray<Type> :: getFirst()
{
    return front->getNodeData();
}

template <class Type>
Type SummerArray<Type> :: getLast()
{
    return end->getNodeData();
}

//setAtIndex replaces data at that index location, destructive, destroys existing data
template <class Type>
void SummerArray<Type> :: setAtIndex(int index, Type data)
{
    assert(index >= 0 && index < length);
    
    DataNode<Type> * indexPointer = front;
    for(int position = 0; position < index; position++)
    {
        indexPointer = indexPointer->getNodePointer();
    }
    
//overwrites the value in indexPointer
    indexPointer->setNodeData(data);
}

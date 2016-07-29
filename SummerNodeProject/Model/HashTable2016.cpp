//
//  HashTable2016.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable2016.hpp"
#include <iostream>

using namespace std;

template <class Type>
HashTable<Type> :: HashTable()
{
    this->size = 0;
    this->capacity = 101;
    this->efficiencyPercentage = .666;
    
    this->front = * new HashNode<Type> *();
           HashNode<Type> * currentEnd = front;
           
    //loop to create the first arrary of nodes for storage.
           //create node, goto end, connect node, shift front
           
           for(int index =1; index<capacity; index++)
           {
               HashNode<Type> * next = new HashNode<Type>();
               currentEnd->setNode(next);
               currentEnd = next;
           }
}

template <class Type>
void HashTable<Type> :: add(Type data)
{
    if ((static_cast<double>(size) / capacity) >= efficiencyPercentage)
    {
        resize();
    }

    long position = findPosition(data);
    
    HashNode<Type> * indexPointer = front;
    
    for(int index = 0; index < position; index++)
    {
        indexPointer = indexPointer->getNode();
    }
    
    indexPointer->setData(data);
    indexPointer->setStuffed(true);
    
}

template <class Type>
long HashTable<Type>  :: findPosition(Type data)
{
    long insertedPosition;
    
    //should give you a positive number
    unsigned long address = (long)&data;
    insertedPosition = address % capacity;
    
    HashNode<Type> * indexPointer = front;
    
    for (long index = 0; index < insertedPosition; index++)
    {
        indexPointer = indexPointer->getNode();
    }
    
    if (indexPointer->hasStuffed())
    {
        insertedPosition = handleCollision(data, insertedPosition);
    }
    
    return insertedPosition;
}

template <class Type>
long HashTable<Type> :: handleCollision(Type data, long currentPosition)
{
    long updatedPosition = -1;
    
    HashNode<Type> * indexPointer = front;
    
    for (long index = 0; index< currentPosition +1; index ++)
    {
        indexPointer = indexPointer->getNode();
    }
    
    for (long index = currentPosition +1; index < capacity && updatedPosition == -1; index++)
    {
        if (!indexPointer->hasStuffed())
        {
            updatedPosition = index;
           
        }
        indexPointer = indexPointer->getNode();
    }
    
    if (updatedPosition == -1)
    {
        indexPointer= front;
        for (long index = 0; (index < currentPosition && updatedPosition == -1); index++)
        {
            if (!indexPointer->hasStuffed())
            {
                updatedPosition = index;
                
            }
            indexPointer = indexPointer->getNode();
        }
    }
    return updatedPosition;
}

template <class Type>
void HashTable<Type> :: resize()
{
    
}

template <class Type>
void HashTable<Type>  :: displayContents()
{
    HashNode<Type> * indexPointer = front;
    for (long index = 0; index < capacity; index++)
    {
        cout << indexPointer->getData() << " # " << index << endl;
        indexPointer = indexPointer->getNode();
    }
}



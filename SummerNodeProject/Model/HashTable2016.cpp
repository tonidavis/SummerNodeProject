//
//  HashTable2016.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable2016.hpp"

template <class Type>
HashTable<Type> :: HashTable()
{
    this->size = 0;
    this->capacity = 101;
    this->efficiencyPercentage = .666;
    
    this->front = new HashNode<Type>*();
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
    
    
    return insertedPosition;
}




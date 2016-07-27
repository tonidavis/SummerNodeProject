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
  
    //create node
    DataNode<Type> * newNode= new DataNode<Type>(data);
    
    if(index == 0)
    {
        addAtFront(data):
    }
    
    else if(index == size-1)
    {
        add(data);
    }
    
    else
    {
    
        //get to the spot before where you want to add the data
        for(int position = 0; position < index-1; position++)
        {
            indexPointer = indexPointer->getNodePointer();
        }
        
        //pointed newNode to the address of indexPointers next node
        //newNode->setNodePointer(indexPointer->getNodePointer());
        //next 2 lines do same as previous 1 line
        DataNode<Type> * temp = indexPointer->getNodePointer();
        newNode->setNodePointer(temp);
        
        //setting indexPointer to point the newNodes address
        indexPointer->seNodePointer(newNode);
    
    }
    
}

//create add method
template <class Type>
void SummerList<Type>  :: add(Type data)
{
    //create a node
    DataNode<Type> * newNode= new DataNode<Type>(data);
    
    if(size==0)
    {
        front = newNode;
        end = newNode;
    }
    else
    {
        end->setNodePointer(newNode);
        end = newNode;
    }
}

//create add at front method
template <class Type>
void SummerList<Type>  :: addAtFront(Type data)
{
    //create a node
    DataNode<Type> * newNode= new DataNode<Type>(data);
    
    if(size==0)
    {
        front = newNode;
        end = newNode;
    }
    else
    {
        newNode->setNodePointer(front);
        front = newNode;
 
    }
}

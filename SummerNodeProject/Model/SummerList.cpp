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
        newNode->setNodePointer(indexPointer);
        front = newNode;
    }
    
    else if(index == size-1)
    {
        end->setNodePointer(newNode);
        end = newNode;
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
   // DataNode<Type> * indexPointer = end;
    
    

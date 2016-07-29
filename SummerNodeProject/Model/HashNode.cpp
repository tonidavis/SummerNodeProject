//
//  HashNode.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashNode.hpp"

template <class Type>
HashNode<Type> :: HashNode()
{
    isStuffed = false;
    nextNode = nullptr;
}

template <class Type>
HashNode<Type> :: HashNode(Type data)
{
    this->data = data;
    isStuffed = true;
    nextNode = nullptr;
}

template <class Type>
Type HashNode<Type> :: getData()
{
    return data;
}

template <class Type>
bool HashNode<Type> :: hasStuffed()
{
    return isStuffed;
}

template <class Type>
HashNode<Type> * HashNode<Type> :: getNode()
{
    return nextNode;
}

template <class Type>
void HashNode<Type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
void HashNode<Type> :: setNode(HashNode<Type> * nextNode)
{
    this->nextNode = nextNode;
}

template <class Type>
void HashNode<Type> :: setStuffed(bool isStuffed)
{
    this->isStuffed = isStuffed;
}


















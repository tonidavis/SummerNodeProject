//
//  DataNode.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "DataNode.hpp"

//constructors
template <class Type>
DataNode<Type> :: DataNode()
{
    this->nodePointer = nullptr;
    
}

template <class Type>
DataNode<Type> :: DataNode(Type nodeData)
{
    this->nodeData = nodeData;
    this->nodePointer = nullptr;
}
//end consructors

//getters and setters
template <class Type>
Type DataNode<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
DataNode<Type> * DataNode<Type> :: getNodePointer()
{
    return nodePointer;
}

template <class Type>
void DataNode<Type> :: setNodeData(Type nodeData)
{
    this->nodeData=nodeData;
}

template <class Type>
void DataNode<Type> :: setNodePointer(DataNode<Type> * nodePointer)
{
    this->nodePointer = nodePointer;
}

//End Getters/Setters

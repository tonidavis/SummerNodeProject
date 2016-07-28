//
//  BinaryTreeNode.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTreeNode.hpp"

template <class Type>
//constructor
BinaryTreeNode<Type> :: BinaryTreeNode() : DataNode<Type>()
{
   //initialize
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

//value based constructor
template <class Type>
//pass data parameter to super class constructor
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : DataNode<Type>(data)
{
    //initialize
    //this->setNodeData(data); This is not needed because of "DataNode<Type>(data)" above
    parent = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
    
}

//getters and setters
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> ::  getLeftChild()
{
    return leftChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type>  * leftChild)
{
    this->leftChild = leftChild;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> ::  getRightChild()
{
    return rightChild;
}

template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type>  * rightChild)
{
    this->rightChild = rightChild;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> ::  getParent()
{
    return parent;
}

template <class Type>
void BinaryTreeNode<Type> :: setParent(BinaryTreeNode<Type>  * parent)
{
    this->parent = parent;
}

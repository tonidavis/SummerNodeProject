//
//  BinaryTree.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTree.hpp"

template <class Type>
BinaryTree<Type> :: BinaryTree()
{
    //data members
    root = nullptr;
}

template <class Type>
void BinaryTree<Type> :: insert(Type data)
{
    BinaryTreeNode<Type>* insertedNode(data);
    {
       BinaryTreeNode<Type> * insertedNode = new BinaryTreeNode<Type>(data);
        //recursions--method calls its self
        insert(insertedNode, root);
    }
}

template <class Type>
void BinaryTree<Type> :: insert(BinaryTreeNode<Type> * insertedNode, BinaryTreeNode<Type> * currentRootNode)
    {
        //compare
        //base case--if it is null
        if(currentRootNode == nullptr)
        {
            currentRootNode = insertedNode;
        }
        //if less than root go left
        else if(insertedNode->getNodeData() <currentRootNode->getNodeData())
        {
            insert(insertedNode), currentRootNode->getLeftChild();
        }
        //if not, then go right
        else if(insertedNode->getNodeData() > currentRootNode->getNodeData())
        {
            insesrt(insertedNode, currentRootNode->getRightChild());
        }
    }
    


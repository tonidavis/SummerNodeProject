//
//  BinaryTree.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/28/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "BinaryTree.hpp"
#include <iostream>

using namespace std;

template <class Type>
BinaryTree<Type> :: BinaryTree()
{
    //data members
    root = nullptr;
}

template <class Type>
void BinaryTree<Type> :: insert(Type data)
{
    BinaryTreeNode<Type>* insertedNode = new BinaryTreeNode<Type>(data);
//recursions--method calls its self
    insert(insertedNode, root);
    
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
            insert(insertedNode, currentRootNode->getLeftChild());
        }
        //if not, then go right
        else if(insertedNode->getNodeData() > currentRootNode->getNodeData())
        {
            insert(insertedNode, currentRootNode->getRightChild());
        }
    }
    
template <class Type>
void BinaryTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        //goes left as far as it can, then up and right
        inOrderTraversal(currentNode->getLeftChild());
        cout << currentNode->getNodeData() << ", ";
        inOrderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void BinaryTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        //
        cout << currentNode->currentNode->getNodeData() <<",";
        preOrderTraversal(currentNode->getLeftChild());
        preOrderTraversal(currentNode->getRighChild());
    }
}

template <class Type>
void BinaryTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        //
        postOrderTraversal(currentNode->getLeftChild());
        postOrderTraversal(currentNode->getRighChild());
        cout << currentNode->currentNode->getNodeData() <<",";
    }
}

template <class Type>
BinaryTreeNode<Type> * BinaryTree<Type> :: getRoot()
{
    return root;
}
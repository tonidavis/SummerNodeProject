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
    root = insert(insertedNode, root);
    
}

template <class Type>
    BinaryTreeNode<Type> * BinaryTree<Type> :: insert(BinaryTreeNode<Type> * insertedNode, BinaryTreeNode<Type> * currentRootNode)
    {
        //compare
        //base case--if it is null
        if(currentRootNode == nullptr)
        {
            return insertedNode;
        }
        //if less than root go left
        else if(insertedNode->getNodeData() <currentRootNode->getNodeData())
        {
            currentRootNode->setLeftChild(insert(insertedNode, currentRootNode->getLeftChild()));
        }
        //if not, then go right
        else if(insertedNode->getNodeData() > currentRootNode->getNodeData())
        {
            currentRootNode->setRightChild (insert(insertedNode, currentRootNode->getRightChild()));
        }
        return currentRootNode;
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
        cout << currentNode->getNodeData() <<",";
        preOrderTraversal(currentNode->getLeftChild());
        preOrderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void BinaryTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
    {
        //
        postOrderTraversal(currentNode->getLeftChild());
        postOrderTraversal(currentNode->getRightChild());
        cout << currentNode->getNodeData() <<",";
    }
}

template <class Type>
BinaryTreeNode<Type> * BinaryTree<Type> :: getRoot()
{
    return root;
}

template<class Type>
void BinaryTree<Type>  :: calculateSize
    (BinaryTreeNode<Type> * currentNode)
{
    if(currentNode != nullptr)
       {
           calculateSize(currentNode->getLeftChild());
           calculateSize(currentNode->getRightChild());
           size++;
       }
}

template <class Type>
int BinaryTree<Type>  :: getSize()
{
    size = 0;
    calculateSize(root);
    return size;
}










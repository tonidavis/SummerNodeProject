//
//  NodeController.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "NodeController.hpp"
#include "../Model/DataNode.cpp"
#include <string>
#include <iostream>
#include "../Model/SummerArray.cpp"
#include "../Model/BinaryTree.cpp"

using namespace std;

void NodeController :: tryNodes()
{
    DataNode<int> numberNode;
    DataNode<string> wordNode;
    cout << "before" <<endl;
    cout << numberNode.getNodeData() << endl;
    cout << "after" << endl;
    numberNode.setNodeData(231);
    cout << numberNode.getNodeData() << endl;
}


void NodeController :: tryArray()
{
    SummerArray<int> testArray(3);
   // int derpy[3]; does the same as SummerArray
}

void NodeController :: tryTree()
{
    BinaryTree<int> sampleTree;
    sampleTree.insert(7);
    sampleTree.insert(5);
    sampleTree.insert(213);
    sampleTree.insert(-213);
    sampleTree.insert(5);
    sampleTree.insert(123124);
    sampleTree.insert(0);
    
    cout << "The in order traversal" << endl;
    sampleTree.inOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
    cout << "The pre order traversal" << endl;
    sampleTree.preOrderTraversal(sampleTree.getRoot());
    cout << endl;
    
    cout << "The post order traversal" << endl;
    sampleTree.postOrderTraversal(sampleTree.getRoot());
    cout << endl;
}
void NodeController :: start()
{
    tryTree();
}



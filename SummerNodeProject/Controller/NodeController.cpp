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

void NodeController :: start()
{
    tryArray();
}

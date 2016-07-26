//
//  DataNode.hpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef DataNode_hpp
#define DataNode_hpp

#include <stdio.h>

template <class Type>
class DataNode
{
private:
    Type nodeData;
    DataNode * nodePointer;
    
    
public:
    DataNode();
    DataNode(Type nodeData);
    void setDataNode(Type nodeData);
    void setNodePointer(DataNode * nodePointer);
    Type getDataNode();
    DataNode * getNodePointer();
    
};


#endif /* DataNode_hpp */

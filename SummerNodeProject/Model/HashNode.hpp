//
//  HashNode.hpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include <stdio.h>

template <class Type>
class HashNode
{
private:
    Type data;
    bool isStuffed;
    HashNode<Type> * nextNode;
    
public:
    HashNode();
    HashNode(Type data);
    
    Type getData();
    bool hasStuffed();
    HashNode<Type> * getNode();
    
    void setData(Type data);
    void setNode(HashNode<Type> * nextNode);
    void setStuffed(bool isStuffed);
    
};

#endif /* HashNode_hpp */

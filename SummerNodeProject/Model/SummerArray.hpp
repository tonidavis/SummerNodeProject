//
//  SummerArray.hpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef SummerArray_hpp
#define SummerArray_hpp

#include <stdio.h>
#include "DataNode.hpp"

template <class Type>
class SummerArray
{
private:
    int length;
    bool * modifiedNodes;
    DataNode<Type> front;
    DataNode<Type> end;
public:
    SummerArray(int length);
    
    Type getFormIndex(int index);
    Type getFirst();
    Type getLast();
    void setAtIndex(int index, Type data);
    
    void sort();
    void resize(int newSize);
    int getUnusedNodes();
    
};

#endif /* SummerArray_hpp */

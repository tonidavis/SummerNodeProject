//
//  main.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include <iostream>
#include "Controller/NodeController.hpp"

int main()
{
    std::cout << "Starting NodeController!\n" <<std::endl;
    NodeController * app = new NodeController();
    app->start();
    std::cout << "Ending NodeController" <<std::endl;
    
    return 0;
}


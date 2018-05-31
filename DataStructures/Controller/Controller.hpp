//
//  Controller.hpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include "FileController.hpp"
#include "Tools/Timer.hpp"
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Testers/RecursionTester.hpp"
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Testers/GraphTester.hpp"
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Testers/BinaryTreeTester.hpp"
#include <iostream>
#include <vector>


class Controller
{
private:
    void findMaxAndMin();
    void createALinkedList();
    void timerTest();
public:
    void start();
};

#endif /* Controller_hpp */

//
//  TestingStacksAndQueues.hpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 2/28/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Controller/FileController.hpp"
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Controller/Tools/Timer.hpp"
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Model/Structures/Linear/Stack.hpp"
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Model/Structures/Linear/Queue.hpp"
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Model/Structures/Linear/List.hpp"
#include <iostream>

using namespace std;

class TestingStacksAndQueues
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};

#endif /* TestingStacksAndQueues_hpp */

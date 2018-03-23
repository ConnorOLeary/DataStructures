//
//  GraphTester.hpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 3/23/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Model/Structures/NonLinear/Graph.hpp"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
};



#endif /* GraphTester_hpp */

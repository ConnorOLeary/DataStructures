//
//  RecursionTester.hpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef RecursionTester_hpp
#define RecursionTester_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Controller/Tools/Timer.hpp"

using namespace std;

class RecursionTester
{
private:
    int fib(int start);
    string mystery(string word);
    string repetition(string word);
public:
    void testRecursionNumbers();
    void testRecursionString();
};

#endif /* RecursionTester_hpp */

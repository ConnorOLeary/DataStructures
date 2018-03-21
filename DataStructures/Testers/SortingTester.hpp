//
//  Sorting Tester.hpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 3/15/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Sorting_Tester_hpp
#define Sorting_Tester_hpp

#include <iostream>
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Controller/FileController.hpp"
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Controller/Tools/Timer.hpp"

class SortingTester
{
private:
    void quickSort(vector<CrimeData> data, int low, int high);
    int partition(vector<CrimeData> data, int low, int high);
    void swap(vector<CrimeData> data, int small, int large);
    int swapCount;
public:
    void testSorts();
};

#endif /* Sorting_Tester_hpp */


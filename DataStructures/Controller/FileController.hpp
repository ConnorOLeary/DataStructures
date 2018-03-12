//
//  FileController.hpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "../Data/CrimeData.hpp"
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Model/Structures/Linear/LinkedList.hpp"

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
};


#endif /* FileController_hpp */

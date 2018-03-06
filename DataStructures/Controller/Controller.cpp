//
//  Controller.cpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
using namespace std;

void Controller :: start()
{
    findMaxAndMin();
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/cole9798/Downloads/crime.csv");
    for (int loop = 200; loop < 216 ; loop ++)
    {
        cout << "Spot # " << loop << ": " << myData[loop] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    RecursionTester test;
    test.testRecursionNumbers();
}

void Controller :: createALinkedList()
{
    
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/cole9798/Downloads/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 0; index < myData.size(); index++)
    {
        if (myData [minIndex] < myData [index])
        {
            minIndex = index;
        }
        
        if (myData [maxIndex] > myData[index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << " The smallest crime stat is at "<< minIndex << " and it is: " << myData[minIndex] << endl;
    cout << " The largest crime stat is at "<< maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}

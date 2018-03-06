//
//  RecursionTester.cpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if(number == 0 || number == 1)
    {
        cout << "reached a base case" << endl;
        return 1;
    }
    else
    {
        cout << "calling fib with: " << number - 1 << " and " << number - 2 << endl;
        return fib(number - 1) + fib(number - 2);
    }
}

string RecursionTester :: mystery(string word)
{
    return "";
}

string RecursionTester :: repetition(string word)
{
    if(word.substr(0,4) == "1234")
    {
        return word;
    }else{
        if(word.substr(0, 1) != "1"){
            word = "1" + word;
        }else if(word.substr(1, 2) != "2"){
            word = word.substr(0,1)+ "2" + word.substr(1,2);
        }else if(word.substr(2, 3) != "3"){
            word = word.substr(1,2)+ "3" + word.substr(2,3);
        }else if(word.substr(3, 4) != "4"){
            word = word.substr(2,3)+ "4" + word.substr(3,4);
        }
        cout << "ITERATION" << endl;
        return repetition(word);
    }
    
}

void RecursionTester :: testRecursionNumbers()
{
    Timer recursionTimer;
    cout << "Testing fibonacci with 100" << endl;
    recursionTimer.startTimer();
    cout << fib(10) << endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
    
}

void RecursionTester :: testRecursionString()
{
    
}

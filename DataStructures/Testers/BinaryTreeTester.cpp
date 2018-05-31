//
//  BinaryTreeTester.cpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff() {
    testTreeInt.insert(7);
    testTreeInt.insert(1);
    testTreeInt.insert(24);
    testTreeInt.insert(6);
    testTreeInt.insert(66);
    testTreeInt.insert(5);
    testTreeInt.insert(25);
    testTreeInt.insert(4380);
    testTreeInt.insert(99);
    testTreeInt.insert(9001);
    testTreeInt.insert(101);
    
    cout << testTreeInt.getHeight() << endl;
    if(testTreeInt.isBalanced()){
        cout << "Its balanced" << endl;
    }
    
    if(testTreeInt.isComplete()){
        cout << "Its complete" << endl;
    }
    cout << "--------------------------" << endl;
    cout << "in Order Int" << endl;
    testTreeInt.inOrderTraversal();
    cout << "--------------------------" << endl;
    cout << "pre Order Int" << endl;
    testTreeInt.preOrderTraversal();
    cout << "--------------------------" << endl;
    cout << "post Order Int" << endl;
    testTreeInt.postOrderTraversal();
    
    testTreeString.insert("Time");
    testTreeString.insert("To");
    testTreeString.insert("Test");
    testTreeString.insert("The");
    testTreeString.insert("Tree");
    testTreeString.insert("Traversals");
    testTreeString.insert("That");
    testTreeString.insert("Talk");
    testTreeString.insert("To");
    testTreeString.insert("These");
    testTreeString.insert("Things");
    
    cout << testTreeString.getHeight() << endl;
    if(testTreeString.isBalanced()){
        cout << "Its balanced" << endl;
    }
    
    if(testTreeString.isComplete()){
        cout << "Its complete" << endl;
    }
    cout << "--------------------------" << endl;
    cout << "in Order String" << endl;
    testTreeString.inOrderTraversal();
    cout << "--------------------------" << endl;
    cout << "pre Order String" << endl;
    testTreeString.preOrderTraversal();
    cout << "--------------------------" << endl;
    cout << "post Order String" << endl;
    testTreeString.postOrderTraversal();
}

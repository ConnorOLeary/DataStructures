//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 3/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Model/Structures/Nodes/BinaryTreeNode.hpp"
#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Model/Structures/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
public:
    void doTreeStuff();
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
};

#endif /* BinaryTreeTester_hpp */

//
//  Node.hpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 2/8/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

using namespace std;

template <class Type>
class Node
{
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
    
}

template <class Type>
Node<Type> :: Node()
{
    this->data = data;
}

template <class Type>
Node<Type> :: Node()
{
    return data;
}

#endif /* Node_hpp */

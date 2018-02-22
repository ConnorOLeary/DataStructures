//
//  Array.hpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>
#include <assert.h>
#include <iostream>

using namespace std;

template <class Type>
class Array
{
public:
    Array<Type>(int size);
    
    Array<Type>(const Array<Type> & toCopy);
    
    ~Array<Type();
    
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& ator [] (int index);
    Type operator [] (int index) const;
    
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
private:
    Type * internalArray;
    int size
    
};
    
template <class Type>
Array<Type> :: Array(int size)
{
    assert(size > 0);
    this->size = size;
    
    internalArray = new Type[size];
}
    
template <class Type>
Array<Type> :: Array(const Array<Type> & toCopy)
{
    this -> size = toCopy.getSize();
    
    internalArray = new Type[size];
    
    for(int index = 0; index < size; index++)
    {
        internalArray[index] = toCopy[index]
    }
    
}
    
template <class Type>
Array<Type> :: ~Array()
{
    delete [] internalArray;
}

template <class Type>
    Array<Type> & Array<Type> :: operator
    
    
    
template <class Type>
void Array<Type> :: setAtIndex(int pos, Type item)
{
    
}
#endif /* Array_hpp */

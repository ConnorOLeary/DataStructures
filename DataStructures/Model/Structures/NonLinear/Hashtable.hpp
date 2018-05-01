//
//  Hashtable.hpp
//  DataStructures
//
//  Created by Oleary, CONNOR on 4/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include "/Users/cole9798/Documents/Data Structure/DataStructures/DataStructures/Model/Structures/Nodes/HashNode.hpp"

template <class Type>
class Hashtable
{
private:
    HashNode<Type> * internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime(long current);
    long isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
public:
    Hashtable();
    ~Hashtable();
    
    void insert(Type data);
    long getSize();
};

template <class Type>
HashTable<Type> :: Hashtable()
{
    capacity 101;
    internalStorage = new HashNode<Type>[101];
    size = 0;
    loadFactor = .80;
}
template<class Type>
HashTable<Type> :: ~Hashtable()
{
    delete[] internalStorage;
}

template <class Type>
bool Hashtable<Type> :: isPrime(long current)
{
    if(candidateNumber <= 1)
    {
        return false;
    }
    else if(current == 2 || current == 3)
    {
        return true;
    }
    else if(current % 2 == 0)
    {
        return false;
    }
    else
    {
        for(int next = 3; next <=sqrt(current) +1; next += 2)
        {
            if(current %next == 0)
            {
                return false;
            }
        }
        return true;
    }
}

template <class Type>
long Hashtable<Type> :: findPosition(HashNode<Type> * insert)
{
    return -1;
}

tempalte <class Type>
long Hashtable<Type> :: handleCollision(HashNode<Type> *, long index)
{
    return -1;
}

template<class Type>
long Hashtable<Type> :: getSize()
{
    return -1;
}

template <class Type>
long Hashtable<Type> :: getNextPrime()
{
    long nextPrime = (this->capacity *2) +1;
    while(!isPrime(nextPrime))
    {
        nextPrime += 2;
    }
    return nextPrime;
}

template <class Type>
void Hashtable<Type> :: resize()
{
    
}

template <class Type>
void Hashtable<Type> :: insert(Type value)
{
    
}

#endif /* Hashtable_hpp */

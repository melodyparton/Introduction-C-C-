#pragma once
#include <iostream>

class Vector {
    public : 
        Vector(); // default constructor (initializing an empty vector)
        Vector(int count, float value); //constructor initializing with vector with count copies of an input value
        ~Vector(); // destructor 
        
    
    private : 
        int length;
        int capacity;
        float value;
        float * tab ;
    //copy constructor and copy assignment operator (see below)
        int size() const; // return number of elements
        void push_back(const float& f); // adds an element at the end of the range, reallocate memory if needed
        float& operator[](int index); // return the i-th element if it exist, undefined otherwise
        const float& operator[](int index) const; // return the i-th element if it exist, undefined otherwise
        void reserve(int new_cap); // increase the capacity of the vector to a capacity greater or equal to new_cap
        Vector(const Vector& other); // create a new vector by copying entries from the other vector, this is the method called when doing :
		Vector& operator=(const Vector& other);


};

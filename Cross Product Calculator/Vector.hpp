//
//  Vector.hpp
//  Cross Product Calculator
//
//  Created by Tyler Doll on 9/28/15.
//  Copyright © 2015 Tyler Doll. All rights reserved.
//

#ifndef Vector_hpp
#define Vector_hpp

#include <iostream>

using namespace std;

class Vector {
public:
    int x, y, z;
    
    // Constructor
    Vector();
    Vector(int, int, int);
    // Destructor
    ~Vector();
    
    void askForValues();
    void printValues();
    Vector crossWith(Vector);
    string toString();
    
    // X
    void setX(int);
    int getX();
    
    // Y
    void setY(int);
    int getY();
    
    // Z
    void setZ(int);
    int getZ();
};

#endif /* Vector_hpp */

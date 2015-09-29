//
//  Vector.cpp
//  Cross Product Calculator
//
//  Created by Tyler Doll on 9/28/15.
//  Copyright © 2015 Tyler Doll. All rights reserved.
//

#include <iostream>
#include "Vector.hpp"
#include "utilities.hpp"

using namespace std;

// Constructors
Vector::Vector():x(0), y(0), z(0) {
}
Vector::Vector(int x,int y,int z):x(x), y(y), z(z) {
}

// Destructors
Vector::~Vector() {}

void Vector::askForValues() {
	int x, y, z;
	printLn("x = ");
	cin >> x;
	
	printLn("y = ");
	cin >> y;
	
	printLn("z = ");
	cin >> z;
	
	this->setX(x);
	this->setY(y);
	this->setZ(z);
}

// Methods
Vector Vector::crossWith(Vector b) {
	Vector c;
	
	c.setX(b.getZ() * this->getY() - b.getY() * this->getZ());
	c.setY(-(b.getZ() * this->getX() - b.getX() * this->getZ()));
	c.setZ(b.getY() * this->getX() - b.getX() * this->getY());
	
	return c;
}

string Vector::toString() {
	return "<" + to_string(this->getX()) + ", " + to_string(this->getY()) + ", " + to_string(this->getZ()) + ">";
}

void Vector::printValues() {
	printLn("Vector a = " + this->toString());
}

// X
void Vector::setX(int value) {
	this->x = value;
}
int Vector::getX() {
	return this->x;
}

// Y
void Vector::setY(int value) {
	this->y = value;
}
int Vector::getY() {
	return this->y;
}

// Z
void Vector::setZ(int value) {
	this->z = value;
}
int Vector::getZ() {
	return this->z;
}
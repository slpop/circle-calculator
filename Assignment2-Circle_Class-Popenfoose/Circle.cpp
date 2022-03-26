// Circle.cpp  implementation file
// CSIS 112 B02
// Stacey Popenfoose
#include "Circle.h"		// include header file
#include <iostream>

double Circle::calcCircumference() {
	circumference = 2 * pi * getRadius();
	return circumference;
}

double Circle::calcArea() {
	area = getRadius() * getRadius() * pi;
	return area;
}

void Circle::setRadius(double r) {		// stores user input as private variable "radius"
	radius = r;
}

double Circle::getRadius() const {
	return radius;
}

void Circle::showData() {
	std::cout << "Radius: " << getRadius() << std::endl;
	std::cout << "Circumference: " << calcCircumference() << std::endl;
	std::cout << "Area: " << calcArea() << std::endl;
}
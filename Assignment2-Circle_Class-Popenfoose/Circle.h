// Circle.h  class declaration file
// CSIS 112 B02
// Stacey Popenfoose
#pragma once	// preprocessor directive, ensures that header file is only included once when program is compiled
class Circle {
public:
	double r = 0;
	void setRadius(double r);
	double getRadius() const;
	double calcCircumference();
	double calcArea();
	void showData();
private:
	double circumference;
	double area;
	double radius;		// used for storing user input "r" as private
	double pi = 3.1415;
};


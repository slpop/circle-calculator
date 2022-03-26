// CircleDriver.cpp  main() function file
// CSIS 112 B02
// Stacey Popenfoose
#include <iostream>
#include "Circle.h"     // include header file
using namespace std;

int main()
{
    cout << "Stacey Popenfoose - Assignment 2" << endl;
    Circle obj;     // create object
    cout << "Enter the radius for a circle (Enter -1 to quit the program): " << endl;
    cin >> obj.r;
    cout << endl;
    if (obj.r == -1) {     // checks if input is -1 and exits if so
        exit(0);
    }
    else {
        while (cin.fail() || (obj.r <= 0 && obj.r != -1)) {
            cout << "Please enter a positive number to run the program (or -1 to quit):" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> obj.r;
            if (obj.r == -1) {    // checks if new input is -1
                exit(0);
            }
        };
    }
    obj.setRadius(obj.r);
    obj.showData();
    return 0;
}
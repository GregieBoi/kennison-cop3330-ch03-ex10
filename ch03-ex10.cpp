/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 McGreggor Kennison
 */

#include "std_lib_facilities.h"

int main() {

    // initialize variables
    string operation;
    double val1, val2;

    // print input prompt
    cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two floating-point values separated by a space: ";

    // scan in input
    cin >> operation >> val1 >> val2;

    // if else statements to determine calculations

    // addition
    if (operation == "plus" || operation == "+")
        
        // print sum
        cout << val1 + val2 << "\n";
    
    // subtraction
    else if (operation == "minus" || operation == "-")
        
        // print difference
        cout << val1 - val2 << "\n";
    
    // multiplication
    else if (operation == "mul" || operation == "*")
        
        // print product
        cout << val1 * val2 << "\n";
    
    // division
    else if (operation == "div" || operation == "/")
        
        // print quotient
        cout << val1 / val2 << "\n";
    
    // default
    else

        // print invalid input
        cout << "please enter valid input.\n";

}

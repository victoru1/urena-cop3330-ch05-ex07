/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Victor Urena
 */

#include "std_lib_facilities.h"

void quadForm(double a, double b, double c)
{
    double insideSquareRoot = pow(b,2) - 4* a * c;
    double rootOne, rootTwo;
   
    if (insideSquareRoot < 0)
    {
        cout << "There are no real roots for the values you entered.\n";
        exit(1);
    }
    else 
    {
        rootOne = ((-1.0 * b) + sqrt(insideSquareRoot)) / (2 * a);
        rootTwo = ((-1.0 * b) - sqrt(insideSquareRoot)) / (2 * a);

        printf("The roots of the entered values are %.2f and %.2f\n", rootOne, rootTwo);
    }
}

int main()
{
    double a, b, c;

    cout << "Hello, Welcome to the Quadratic Formula Program!\n";
    cout << "Please enter an \"a\" value: ";
    cin >> a;

    cout << "Please enter a \"b\" value: ";
    cin >> b;

    cout << "Please enter a \"c\" value: ";
    cin >> c;

    quadForm(a,b,c);
}

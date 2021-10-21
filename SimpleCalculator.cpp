// SimpleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Variable declaration
    float a, b, sum, mult, difference, div;
    cout << "......A simple C++ calculator.........!\n";
    cout << "It adds, multiples, subtracts, and divides 2 numbers entered by user.\n";
    cout << "______________________________________\n\n";
    cout << "Enter the first number:";
    //Capture first number from user
    cin >> a;
    cout << "Enter the second number:";
    //Capture second number from user
    cin >> b;
    //Do the maths operations
    sum = a + b;
    mult = a * b;
    difference = a - b;
    div = a/b;
    cout << "\n";
    cout << "Thanks! Here we go..\n\n";
    cout << "Sum of "<<a<<" and "<<b<<" is:"<<sum<<"\n";
    cout << "Multiplication of " << a << " and " << b << " is:" << mult << "\n";
    cout << "Difference of " << a << " and " << b << " is:" << difference << "\n";
    cout << "Division of " << a << " and " << b << " is:" << div << "\n";
    cout << "\n";
    cout << "End of calculation.";
    cout << "\n";
    cout << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    int in5year = 5;
    int in7year = 7;
    int in10year = 10;
    double riseperyear = 1.5;

    double risein5year = in5year * riseperyear;
    double risein7year = in7year * riseperyear;
    double risein10year = in10year * riseperyear;

    cout << "the rise of " << in5year << "years is " << risein5year << "mm" << endl;
    cout << "the rise of " << in7year << "year is " << risein7year << "mm" << endl;
    cout << "the rise of " << in10year << "year is " << risein10year << "mm"<< endl;
    
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

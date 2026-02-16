//*****************************************************************************
// COMSC-210 | Lab 7 | Gabriel Marquez
// Description: this program reverses a dynamic string array.
//*****************************************************************************

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int SIZE = 5;

void displayArray(string *);
string* reverseArray(string *);

int main()
{
    //dynamically allocate a string array
    //revStringPtr will be dynamically allocated in reverseArray()
    string *stringPtr, *revStringPtr = nullptr;
    stringPtr = new string[SIZE];

    //read data from file and populate stringPtr with names
    ifstream fin("names.txt");
    if (!fin.is_open())
    {
        cout << "ERROR! Please verify file name and directory and restart program.";
        return 1;
    }
    for (int i = 0; i < SIZE; ++i)
        fin >> *(stringPtr + i);

    //display original array
    cout << "Original array: ";
    displayArray(stringPtr);
    
    //reverse array and display it reversed
    revStringPtr = reverseArray(stringPtr);
    cout << ""

    delete [] stringPtr;
    delete [] revStringPtr;
    return 0;
}

void displayArray(string *arr)
{
    for(int i = 0; i < SIZE; ++i)
        cout << *(arr + i) << " ";
    cout << endl;
}

string* reverseArray(string *original)
{
    string *temp = nullptr;
    temp = new string[SIZE];
    for (int i = 0; i < SIZE; ++i)
        *(temp +i) = *(original - 1 - i);
    return temp;
}
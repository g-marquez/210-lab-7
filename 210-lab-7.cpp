//*****************************************************************************
// COMSC-210 | Lab 7 | Gabriel Marquez
// Description: this program reverses a dynamic string array while utilizing
// pointer notation.
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
    //dynamically allocate a string array of size SIZE
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

    fin.close();

    //display original array
    cout << "Original array: ";
    displayArray(stringPtr);
    
    //reverse array and display it reversed
    revStringPtr = reverseArray(stringPtr);
    cout << "Reversed array: ";
    displayArray(revStringPtr);

    //be responsible with memory and delete both arrays
    delete [] stringPtr;
    delete [] revStringPtr;
    return 0;
}

// displayArray() takes a dynamic string array and outputs it elements
// to the console on one line.
// arguments: a dynamic string array
// returns: n/a
void displayArray(string *arr)
{
    for(int i = 0; i < SIZE; ++i)
        cout << *(arr + i) << " ";
    cout << endl;
}

// reverseArray() takes a dynamic string array, reverses the elements, and
// returns a pointer to the modified array.
// arguments: a dynamic string array
// returns: a pointer to the reversed array
string* reverseArray(string *original)
{
    string *temp = nullptr;
    temp = new string[SIZE];
    for (int i = 0; i < SIZE; ++i)
        *(temp + i) = *(original + SIZE - 1 - i);
    return temp;
}
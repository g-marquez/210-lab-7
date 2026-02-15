//*****************************************************************************
// COMSC-210 | Lab 7 | Gabriel Marquez
// Description: this program reverses a dynamic string array.
//*****************************************************************************

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

void displayArray(string *);
string* reverseArray(string *);

int main()
{
    string *stringPtr, *revStringPtr = nullptr;
    

    return 0;
}

void displayArray(string *arr)
{
    for(int i = 0; i < SIZE; ++i)
        cout << *(arr + i) << " ";
    cout << endl;
}

string* reverseArray(string *arr)
{

}
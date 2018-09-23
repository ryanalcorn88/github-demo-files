/*
* Created by: Ryan Alcorn
* Description: This file reads a string and determines if
* it is a palindrome by using iterators.
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    string entry;
    string original;

    cout << "Please enter a string to determine if it is a palindrome: " << endl;
    cin >> entry;

    original = entry;

    reverse(entry.begin(), entry.end());

    cout << endl;

    if(entry == original)
    {
        cout << "The string is a palindrome!" << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
}

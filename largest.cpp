#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers;
    int entry = 0;
    int total = 0;

    while(entry != -1)
    {
        cout << "Please enter numbers into the vector or -1 to find the largest number: " << endl;
        cin >> entry;
        if(entry == -1)
        {
            break;
        }
        numbers.push_back(entry);
        total = total + entry;
    }

    sort(numbers.begin(), numbers.end());
    int length = numbers.size();

    cout << "The largest number in the vector is " << numbers[length - 1] << "." << endl;
    cout << "The smallest number in the vector is " << numbers[0] << "." << endl;
    cout << "The sum of all the numbers in the vector is " << total << "." << endl;
}

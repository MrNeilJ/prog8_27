// This program demonstrates the vector size member function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values;

    // Store a series of numbers in the vector
    for (int count = 0; count < 7; count++)
    {
        values.push_back(count * 2);
    }
}
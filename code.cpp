#include <iostream>
using namespace std;

int main()
{
    int *arr;
    int size;

    cout << "Enter the size of the integer array: ";
    cin >> size;

    cout << "Creating an array of size " << size << "..";
    // FIX 1: Use square brackets [] for array allocation
    arr = new int[size]; 

    cout << "\nDynamic allocation of memory for array arr is successful.";

    // FIX 2: Use delete[] to deallocate the array memory
    delete[] arr; 
    return 0;
}

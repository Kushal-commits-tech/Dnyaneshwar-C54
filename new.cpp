#include <iostream>
using namespace std;

int main() {
    // Declare variables to store the numbers and the sum
    int num1, num2, sum;

    // Prompt user for the first number
    cout << "Enter first number: ";
    cin >> num1;

    // Prompt user for the second number
    cout << "Enter second number: ";
    cin >> num2;

    // Calculate the total
    sum = num1 + num2;

    // Print the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}

#include<iostream>
using namespace std; // FIX 1: Added missing namespace for cout

int area(int);
int area(int, int);
float area(float);

int main()
{
    // FIX 2: Fixed multi-line string breaks and syntax errors
    cout << "Calling the area() function for computing the area of a square (side = 5) - " << area(5) << "\n";

    cout << "Calling the area() function for computing the area of a rectangle (length = 5, breadth = 10) - " << area(5, 10) << "\n";
    
    // FIX 3: Added missing opening double quotes
    cout << "Calling the area() function for computing the area of a circle (radius = 5.5) - " << area(5.5f) << "\n"; // FIX 4: Added 'f' to 5.5 to ensure it passes as a float
    
    return 0;
} // FIX 5: Removed loose trailing quote mark and brace errors

int area(int side)
{
    return (side * side);
}

int area(int length, int breadth)
{
    return (length * breadth);
}

float area(float radius)
{
    return (3.14f * radius * radius); // FIX 6: Marked 3.14 as float literal
}

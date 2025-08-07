#include <iostream>
using namespace std;

// Void function definition
void hello()
{
    cout << "Sausages" << endl;
}

// Return-type function definition
int square(int x)
{
    return x * x;
}

int divide(int x, int y)
{
    return x / y;
}

int main()
{
    cout << "Hello World" << endl;
    cout << "hi" << endl;

    // Calling the void function
    hello();

    // Calling the return-type function
    int result = square(5);
    cout << "Square of 5 is: " << result << endl;

    cout << "10 divided by 2 is: " << divide(10, 2) << endl;

    return 0;
    
}
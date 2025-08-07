#include <iostream>
#include <string>
using namespace std;


void hello()
{
    cout << "Sausages" << endl;
}

int square(int x)
{
    return x * x;
}

int divide(int x, int y)
{
    return x / y;
}

int greaterThan5(int x)
{
    if (x > 5)
    {
        int a = 1;
        cout << "x is greater than 5" << endl;
        return a;
    } else
    {
        int a = 0;
        cout << "x is less than 5" << endl;
        return a;
    } 
}

class MyClass {
    public:
        int myNum;
        string myString;
};

int main()
{
    cout << "Hello World" << endl;
    cout << "hi" << endl;
    hello();
    int result = square(5);
    cout << "Square of 5 is: " << result << endl;
    cout << "10 divided by 2 is: " << divide(10, 2) << endl;
    int result2 = greaterThan5(10);
    cout << "10 is greater than 5 so a is: " << result2 << endl;
    int time = 20;
    if (time < 18)
    {
        cout << "Good day." << endl;
    }
    else
    {
        cout << "Good evening." << endl;
    }

    MyClass myObj1;
    myObj1.myNum = 15;
    myObj1.myString = "beanTin";

    cout << myObj1.myNum << "\n";
    cout << myObj1.myString << endl;

    MyClass myObj2;
    myObj2.myNum = 29;
    myObj2.myString = "pie";

    cout << myObj2.myNum << "\n";
    cout << myObj2.myString;
    return 0;
}
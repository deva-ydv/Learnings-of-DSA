#include <iostream>
using namespace std;

#define PI 3.14 // macro  

int main()
{
    // # Macro
    // macro a piece of code in a program that is replaced by value of macro
    int r = 4;
    // double pi = 3.14;  replace by macro
    double area = PI * r * r;
    cout << "Area is " << area << endl;
    return 0;
}
#include <iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;
    cout << *p << endl;
}

void update(int *p)
{
    p = p + 1; // updated value not going to show outside the function
    cout << "inside " << p << endl;
    *p = *p + 2; // updated value also shows outside the function
}

int main()
{
    int value = 34;
    int *p = &value;
    // print(p);

    update(p);
    cout << *p << endl;

    return 0;
}
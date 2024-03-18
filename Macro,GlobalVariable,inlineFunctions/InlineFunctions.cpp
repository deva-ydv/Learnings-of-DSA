#include <iostream>
using namespace std;

// inline

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
    // maximun one or 2,3 line of code in this function comes under the inline function.
    // function call replace by function body call 
}

int main()
{

    int a = 1, b = 3;
    int ans = 0;

    ans = getMax(a, b);
    cout << ans << endl;
}
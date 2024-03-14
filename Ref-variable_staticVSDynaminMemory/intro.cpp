#include <iostream>
using namespace std;
/*
 Reference Variable -> same memory but different names

int i = 4;         // Normal variable
int &j = i;        // Reference variable using &
cout << i << endl; // output 4
i++;
cout << i << endl;
j++;
cout << j << endl;
cout << i << endl;
*/

// void update(int n){
//     n++;
//     // passing normal variable this won't update the value of main function

// }
void update(int &n)
{
    n++;
    // passing Reference variable as an *INPUT this will update the value of main function
}

int main()
{

    int n = 4;
    cout << "Before " << n << endl;
    update(n);
    cout << "After " << n << endl;
}

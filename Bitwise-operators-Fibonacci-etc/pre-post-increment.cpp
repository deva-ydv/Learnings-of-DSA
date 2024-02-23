#include <iostream>
using namespace std;

int main(){

int i = 7;

cout << (++i) << endl;   // Pre-increment: Increment i to 8, then output 8
cout << (i++) << endl;   // Post-increment: Output the current value of i (8), then increment i to 9
cout << (--i) << endl;   // Pre-decrement: Decrement i to 8, then output 8
cout << (i--) << endl;   // Post-decrement: Output the current value of i (8), then decrement i to 7


}

// output

// 8
// 8
// 8
// 8


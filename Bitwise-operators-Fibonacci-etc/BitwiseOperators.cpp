#include <iostream>
using namespace std;
int main()
{

    int a = 4;
    int b = 7;

    cout << " a&b " << (a & b) << endl;
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " a^b " << (a ^ b) << endl;
}

// code output
//  a&b 4
//  a|b 7
//  ~a -5
//  a^b 3

/*

#EXPLANATION

AND => &
OR  => |
NOT => ~
XOR => ^

1) In AND(&) case if both input bit is 1 then we get 1 in output otherwise we get 0

eg:-
input 5 (101)
input 7 (111)
output-->101  which is 5.

2|) In OR(|) case if any input bit is 1 then we get 1 in output otherwise we get 0

eg:-
input 5  (101)
input 7  (111)
output--> 111  which is 7.

3) In NOT(~) case its just invert the input bit [ 1 converts in 0 , and 0 converts in 1 ] this takes only one input

eg:-
input 2 (10) --> (01)--> 1's compliment(10) --> 2's complement in this we need to add +1, so we (11) which is -3
output--> 01 If we need to print this first we have take 2's compliment after that we get the ans which is -3

**negative no. ko print karane k liye uska 2's complement nikalna padta hai**

4) In XOR(^) case if both input bit is 1 and also both bit is 0 we get 0 else we get 1
eg:-
input 2  (010)
input 4  (100)
output--> 110 which is 6.
*/
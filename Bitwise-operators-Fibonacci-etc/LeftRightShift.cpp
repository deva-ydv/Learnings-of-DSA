#include <iostream>
using namespace std;

int main(){

cout <<(17<<1)<<endl;
cout <<(17>>2)<<endl;
cout <<(20>>1)<<endl;
cout <<(5<<2)<<endl;

}


/*

#EXPLANATION


Left Shift

1) 5<<1 
101 --> This is 5 now we going to shift by 1 on left side 
eg:- 
00000000000101 = 5
after shifting 
00000000001010 = 10

2) 3<<2 
11 --> This is 3 now we going to shift by 2 on left side
eg:-
000000000011 = 3
after shifting by 2
000000001100 = 12 

note: If we are shifting any bigger no. that's going to be -ve no.


Right Shift

1) 5>>2 
101 --> This is 15 now we going to shift by 2 on right side
eg:-
00000000101 = 5
after shifting
00000000001 = 1


note: <<,>> for +ve no. padding will always happen with 0


*/
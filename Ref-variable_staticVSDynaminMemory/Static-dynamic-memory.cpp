#include<iostream>
using namespace std;

int main(){

}
/*
//    Two types of memory STACK & HEAP

*******STACK****** -->STATIC MEMORY ALLOCATION
we are still using stack memory, 
stack memory comes with limited amount memory that we defined in our code
eg:-
int i = 5;
int arr[40];
char ch='a';

below code-> we can't do this with stack memory
int n;
cin>>n;
int arr[n];

*******HEAP****** DYNAMIC MEMORY ALLOCATION
we can run above code by using Heap memory 
syntax -> new before any datatype
eg:-
new char; 
but here we can't do naming , eg:- int i =5; we can't do like this here
we have to store it another variable like this 
new char;
char* ch = new char;
bts -> char* ch is in stack memory but pointing to the heap memory i:e new char 


char* ch is 8byte in stack memory but 
new char in heap memory has created a 1byte memory so in total 9bytes.

eg:-
char ch = 'd';
cout<< sizeof(ch)<<endl;
char* c = &ch;
cout<< sizeof(c);

*/


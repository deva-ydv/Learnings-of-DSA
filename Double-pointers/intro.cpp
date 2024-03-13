#include <iostream>
using namespace std;

int main()
{

    int i = 5;
    int *p = &i;   // this ptr points towords to int i
    int **p2 = &p; // this doublepointer is points towords *ptr

    /*cout<< "printing p " << p <<endl;
    cout << "" << *p2 <<endl;

    both prints the same address
    */

/*
cout<<i<<endl;
cout<<*p<<endl;
cout<<**p2<<endl;

all of these prints the same value 5

*/
/*
cout<<i&<<endl;
cout<<p<<endl;
cout<<*p2<<endl;

all of these prints the same address 

*/


}
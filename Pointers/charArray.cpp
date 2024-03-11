#include <iostream>
using namespace std;
int main()
{

int arr[5] = {2,3,4,5,6};
char ch[6] = "abcde";

cout << arr <<endl; // this prints the address 
cout << ch << endl; // this prints the value

// so that means for int and char the cout is differently implemented 

char *c = &ch[0];
cout<< c << endl;// prints entire string 

char temp = 'z';
char *p = &temp;
cout << p<<endl;



}
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 4, 7};
    /*
    cout<< "1st block memory address" << arr <<endl;
    cout<< "1st block memory address" << &arr <<endl;

    both line of code gives the same output

    */
    cout << "0 index location value " << *arr << endl;             // using *
    cout << "0 index location value + 1 = " << *arr + 1 << endl;   // = 3
    cout << "0 index location value + 1 = " << *(arr) + 1 << endl; // = 3

    /*
    cout<< "1 index location value "<< *(arr + 1)<<endl;  // 4
    cout << "1 index location value "<< arr[1] <<endl; // 4
    both line of code gives the same output
     arr[i] == *(arr+i) or i[arr] ==  *(i+arr) both the thing is same
     eg
     int i = 2 // index
     cout<< i[arr] <<endl; // 7
    */
}
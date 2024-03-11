#include<iostream>
using namespace std;

int main(){
    int arr[3] ={3,7,2};
    cout<< "Address of 1st block "<< arr <<endl;
    cout<< "Address of 1st block "<< &arr[0] <<endl;
    cout<< "value at 1st index "<< arr[0] <<endl;

    cout << "4th " << *arr <<endl;
    cout << "5th " << *arr + 1 <<endl;


    return 0;  
}
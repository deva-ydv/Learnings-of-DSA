#include <iostream>
using namespace std;

int main()
{
    /*
    int first = 8;
    int second = 29;

    int *ptr = &second;
    *ptr = 9;
    cout<< first << " " << second << endl;
    */

    /*
    int first = 5;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first <<endl;
    */

    /*
    int first = 8;
    int *p = &first;
    cout<< (*p)++ << endl; // coz here we print post increment so 1st here the value is 8 and after that it will become 9
    cout<< first << endl;

    */

    /*
    int *p = 0; // null pointer
    int first = 19;
    *p = first; // segmentation fault
    cout<<*p <<endl;
    */

    /*
    int *p = 0;
    int first = 19;
    p = &first;
    cout<<*p <<endl;
    */

    /*

    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr =p;
    cout<< *ptr << endl << f << endl << p <<endl;
    */
    /*
    int arr[5];
    int *ptr;
    cout<< sizeof(arr) << endl << sizeof(ptr) <<endl;
    */

    /*
    int arr[] = {2,4,5,6};
    cout<<*(arr)<< " " << *(arr+1) <<endl;
    */

    /*

    int arr[] = {2,4,5,6};
    cout<< arr<<endl<<&arr<<endl;
    */

    /*
    int arr[6] = {2,3,4};
    cout<<(arr+1)<<endl;
    */

    // int arr[6] = {2,3,4};
    // int *p = arr;
    // cout<< p[2] <<endl;

    // int arr[] = {2, 3, 5, 6, 7};
    // cout << *(arr) << endl
    //      << *(arr + 3);


    // int arr[4]= {3,4,5,6};
    // int *ptr = arr++; we can't do this, we can't update our arr memory
    // cout<< *ptr <<endl;


    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout<< *ptr <<endl;

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout<< p <<endl;


    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout<< p <<endl;

    // char str[] = "deva";
    // char *p = str;
    // cout<< str[0] << endl << p[0]<<endl;



    // void update(int *p){
    //     *p = (*p) *2;
    // }

    // int main(){
    //     int i = 10;
    //     update(&i);
    //     cout<< i << endl;
    // }

    // # Double-pointers
    // int first = 29;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 10;
    // cout<< first <<endl<<second;

    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout<< first<<endl<<second;


    return 0;
}
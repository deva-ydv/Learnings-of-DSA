#include <iostream>
using namespace std;

// Function calls itself Directly or Indirectly is known as Recursion
int factorial (int n){
    if(n==0) // base case
    return 1;
    return n * factorial(n-1);
}

int main(){
   int n;
   cin>>n;
int ans = factorial(n);
cout<< ans << endl;
return 0;
}

// int power(int n){
//     if(n==0)
//     return 1; // base case

//     int smallerProblem = power(n-1);
//     int biggerProblem  = 2 * smallerProblem;
//     return biggerProblem;

// }

// int main(){
//     int n;
//     cin>> n;
//     int ans = power(n);
//     cout <<ans<<endl;
//     return 0;
// }

// void print(int n)
// {
//     if (n == 0)
//         return;
//     cout << n << endl;
//     print(n - 1);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     print(n);

//     return 0;
// }
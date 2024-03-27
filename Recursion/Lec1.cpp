#include <iostream>
using namespace std;

// void reachHome(int src, int dest)
// {
//     cout<< "source " << src << " destination "<< dest<< endl;
//     // base case
//     if (src == dest)
//     {
//         cout << "reached Home" << endl;
//         return;
//     }
//     // processing - move one step
//     src++;
//     // recursive call
//     reachHome(src, dest);
// }

// int main()
// {
//     int dest = 10;
//     int src = 1;
//     cout << endl;
//     reachHome(src, dest);
//     return 0;
// }

/*
Q->Fibonacci number question on leetcode

int fib(int n){
    //base case
    if(n == 0)
    return 0;
    if(n == 1)
    return 1;
    int ans = fib(n-1) + fib(n-2)
    return ans
}

Q-> Say digits

*/

void sayDigits(int n, string arr[])
{
    // base case
    if (n == 0)
        return;
    // processing
    int digit = n % 10;
    n = n / 10;
  
    sayDigits(n, arr);// recursive call
      cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = { "zero","one",
                       "two","three","four","five",
                       "six","seven","eight", "nine" };
     int n;
    cin >> n;
    sayDigits(n,arr);
}
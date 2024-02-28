#include <iostream>
using namespace std;

int main(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}


// here we are doing XOR to find the unique element that occurres only once
// xor actually remove the same values..
#include <iostream>
using namespace std;
void prinArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
}



int main()
{
    // int even[6] = {2, 3, 5, 7, 6, 9};
    int odd[5]={4,3,7,1,28};

    swapAlternate(odd, 5);
    prinArray(odd, 5);
}

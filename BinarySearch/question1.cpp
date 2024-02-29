#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int even[6] = {2, 4, 5, 6, 99, 3};
    int odd[5] = {1, 2, 3, 4, 5};

    int evenIndex = binarySearch(even, 6, 99);
    int oddIndex = binarySearch(odd, 5, 3);
    cout << "Index of 4 is " << evenIndex << endl;
    cout << "Index of 2 is " << oddIndex << endl;
    return 0;
}
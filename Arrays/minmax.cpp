#include <iostream>
using namespace std; 
#include <climits>

int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        // pre defined function 
        // max = max(max,num[i]) this will get the max value
    }
    return max;
}
int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cin >> size;
    int num[100];

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "maximun value is " << getMax(num, size) << endl;
    cout << "minimum value is " << getMin(num, size) << endl;

    return 0;
}
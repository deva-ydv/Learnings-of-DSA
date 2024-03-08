#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    // creating 2d array
    // we can take input in 3 ways
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,0,1,2}; // 1st way
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}}; // 2md way input as row

    int arr[3][4];

    // 3rd way using loop
    // taking input -> Row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    // taking input -> col wise
    // for(int i=0; i<4; i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the target you want" << endl;
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "target found" << endl;
    }
    else
    {
        cout << "target not found";
    }

    return 0;
}
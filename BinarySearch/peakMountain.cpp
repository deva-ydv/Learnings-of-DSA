#include<iostream>
using namespace std;

// int main(){
//     int s = 0;
//     int e = 0;
//     int mid = s + (e-s)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s = mid +1;
//         }else{
//             e = mid
//         }
//         mid = s+(e-s)/2;
//     }
//     return s;
// }


// leetcode problem 


#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1; // Initialize ans to -1, to indicate that key is not found yet.

    while (s <= e) {
        mid = s + (e - s) / 2; // Better way to calculate mid to avoid integer overflow
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1; // Update e to search for the first occurrence in the left half
        }
        if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int mid;
    int ans = -1; // Initialize ans to -1, to indicate that key is not found yet.

    while (s <= e) {
        mid = s + (e - s) / 2; // Better way to calculate mid to avoid integer overflow
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1; // Update s to search for the last occurrence in the right half
        }
        if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int even[7] = {1, 2, 3, 3, 3, 3, 5};
    cout << "First Occurrence: " << firstOcc(even, 7, 3) << endl;
    cout << "Last Occurrence: " << lastOcc(even, 7, 3) << endl;
    return 0;
}

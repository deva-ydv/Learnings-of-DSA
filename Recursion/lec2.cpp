#include<iostream>
using namespace std;


int binarySearch(int *arr, int s, int e, int k){
    // base case
    if(s>e)
    return -1; //element not found
    

    int mid = s + (e-s)/2;
    if(arr[mid]== k) // element found
    return 0; 
    if(arr[mid]< k){
        return binarySearch(arr, mid+1,e,k);
    }else{
        return binarySearch(arr, s, mid-1,k);
    }
    }

int main(){
    int arr[5] = {2,3,4,5,5};
    int size = 5;
    int key = 2;
    cout << "present or not "<< binarySearch(arr,0,5,key) <<endl;
    return 0;
}

// int linearSearch(int arr[], int size, int k){
//     // base case
//     if(size == 0)
//     return false;
//     if(arr[0]==k){
//         return true;
//     }else{
//         bool remaining = linearSearch(arr+1, size-1,k);
//         return remaining;
//     }
// }

// int main(){
//     int arr[5] = {2,3,4,5,5};
//     int size = 5;
//     int key = 2;
//     bool ans = linearSearch(arr, size,key);
//     if(ans){
//         cout <<"present"<<endl;
//     }else{
//         cout<< "absent"<<endl;
//     }

//     return 0;
// }



// Get sum code below


// int getSum(int *arr, int size){
//     // base case
//     if(size == 0 ){
//         return 0;
//     }
//     if(size == 1){
//         return arr[0];
//     }
//     int remaining = getSum(arr + 1, size-1);
//     int sum = arr[0] + remaining;
//     return sum;
// }

// int main(){
//     int arr[5] = {2,3,4,5,5};
//     int size = 5;
//     int sum = getSum(arr, size);
//     cout<< "Sum is "<< sum <<endl;
// }

// sorted code below

// bool isSorted(int *arr, int size){
//     // base case
//     if(size == 0 || size ==1){
//         return true;
//     }
//     if(arr[0]> arr[1])
//     return false;
//     else{
//         bool remainingPart = isSorted(arr + 1, size -1);
//         return remainingPart;
//     }
// }

// int main(){
//     int arr[5] = {2,3,4,5,5};
//     int size = 5;
//     bool ans = isSorted(arr,size);
//     if(ans){
//         cout<< "Array is sorted"<<endl;
//     }
// }
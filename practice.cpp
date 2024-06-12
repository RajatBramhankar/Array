#include<iostream>
#include<climits>
using namespace std;

// void marks(int ar[], int size){
//     // Count the number of elements in given array
//     // greater than a given number x.
//     int x = 55;
//     int count = 0;
//     for(int i=0; i<size; i++){
//         if(ar[i] > x){
//             count++;
//         }
//     }
//     cout<<count;
// }

int main(){
    // int n;
    // cout<<"Enter the size of Array: ";
    // cin>>n;

    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // marks(arr, n);

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int *ptr = arr;

    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}
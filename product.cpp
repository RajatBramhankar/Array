#include<iostream>
using namespace std;

int product(int ar[], int size){
    int pro = 1;
    for(int i=0; i<size; i++){
        pro *= ar[i];
    }
    return pro;
}

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Product of Array is: "<<product(arr, n);
}
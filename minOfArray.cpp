#include<iostream>
#include<climits>
using namespace std;

void minOf_Array(int arr[], int size){
    int minM = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i] < minM){
            minM = arr[i];
        } 
    }
    cout<<minM;
}

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    minOf_Array(arr, n);
}
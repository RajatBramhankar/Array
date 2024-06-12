#include<iostream>
using namespace std;

void smallestMissing(int ar[], int size){
    bool flag = false;
    int a = 1;
    for(int i=0; i<size; i++){
        if(ar[i] <= 0) continue;

        if(a != ar[i]){
            flag = true;
            cout<<a;
            break;
        }
        else a++;
    }
    if(flag == false) cout<<"No missing elements";
}

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    smallestMissing(arr, n);
}
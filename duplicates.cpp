#include<iostream>
#include<climits>
using namespace std;

void duplicates(int arr[], int size){
    int count = 0;
    bool flag = false;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                flag = true;
                count++;
                cout<<arr[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
    cout<<"There are: "<<count<<" duplicates in Array!!"<<endl;
    if(flag == false){
        cout<<"No duplicates";
    }
}

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    duplicates(arr, n);
   
}
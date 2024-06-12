#include<iostream>
#include<climits>
using namespace std;

void secLargest(int ar[], int size){
    int maxM = INT_MIN;
    int maxSM = INT_MIN;

    for(int i=0; i<size; i++){
        if(ar[i] > maxM){
            maxSM = maxM;
            maxM = ar[i];
        }
        else{
            maxSM = max(maxSM, ar[i]);
        }
    }
    cout<<maxM<<endl;
    if(maxSM == INT_MIN) cout<<"No second maxM found";
    else cout<<maxSM;
}

int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    secLargest(arr, n);

}
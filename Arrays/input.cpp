#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){//input
        cin>>arr[i];
    }

//Print all the negative numbers in the array.
for(int i=0;i<n;i++){//input
        if(arr[i]<0){
            cout<<arr[i]<<" ";
        }
    }
}
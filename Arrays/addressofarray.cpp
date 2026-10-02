#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,3,4,2,78,31};
    int n=sizeof(arr)/4;
    cout<<arr<<endl; 
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
}
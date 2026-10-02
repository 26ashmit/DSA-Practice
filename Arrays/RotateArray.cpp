#include<iostream>
#include<vector>
using namespace std;
    void rev(vector<int>& nums,int i,int j){
        while(i<j){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }

int main(){
    vector<int>nums={1,2,3,4,5,6,7};
    int n=nums.size();
    int k;
    cout<<"Enter k: ";
    cin>>k;
    k=k%n;
    rev(nums,0,n-1);
    rev(nums,0,k-1);
    rev(nums,k,n-1);
    for(int m=0;m<n;m++){
        cout<<nums[m]<<" ";
    }
    
    
}

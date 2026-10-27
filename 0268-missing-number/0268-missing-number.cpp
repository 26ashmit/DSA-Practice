class Solution {
public:
    // int missingNumber(vector<int>& nums) {
    //     int n=nums.size();
    //     for(int i=0;i<=n;i++){
    //         bool flag=false;
    //         for(int j=0;j<n;j++){
    //             if(nums[j]==i){
    //                 flag=true;
    //                 break;
    //             }
                
    //         }
    //           if(flag==false) return i;
    //     }
    //    return 0;
 
   
    // int missingNumber(vector<int>& nums) {
    //     int n=nums.size();
    //     sort(nums.begin(),nums.end());
    //     for(int i=0;i<n;i++){
    //         if(i!=nums[i]) return i;
    //     }
    //     return n;

    // }
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int arr_sum=0;
        for(int i=0;i<n;i++){
            arr_sum+=nums[i];
        }
        int total_sum=(n*(n+1))/2;
        return total_sum - arr_sum;

        }
    
};
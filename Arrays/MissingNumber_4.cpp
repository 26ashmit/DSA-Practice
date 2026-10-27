
#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();

    vector<bool> arr(n + 1, false);

    for(int i = 0; i < n; i++) {
        arr[nums[i]] = true;
    }

    for(int i = 0; i <= n; i++) {
        if(arr[i] == false) {
            return i;
        }
    }

    return 0;
}

int main() {
    vector<int> nums = {3, 0, 1};

    cout << "Missing number is: " << missingNumber(nums);

    return 0;
}

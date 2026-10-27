
#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();

    int arr_sum = 0;

    for(int i = 0; i < n; i++) {
        arr_sum += nums[i];
    }

    int total_sum = (n * (n + 1)) / 2;

    return total_sum - arr_sum;
}

int main() {
    vector<int> nums = {3, 0, 1};

    cout << "Missing number is: " << missingNumber(nums);

    return 0;
}

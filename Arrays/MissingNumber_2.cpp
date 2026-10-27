
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++) {
        if(i != nums[i]) {
            return i;
        }
    }

    return n;
}

int main() {
    vector<int> nums = {3, 0, 1};

    cout << "Missing number is: " << missingNumber(nums);

    return 0;
}

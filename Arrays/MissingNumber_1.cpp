#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    for(int i = 0; i <= nums.size(); i++) {
        bool flag = false;

        for(int j = 0; j < nums.size(); j++) {
            if(nums[j] == i) {
                flag = true;
                break;
            }
        }

        if(flag == false)
            return i;
    }

    return 0;
}

int main() {
    vector<int> nums = {3, 0, 1};

    int ans = missingNumber(nums);

    cout << "Missing number: " << ans;

    return 0;
}
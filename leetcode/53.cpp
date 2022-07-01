//Leetcode 53. Maximum Subarray (Medium)

#include<algorithm>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxnum = INT_MIN;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){
            sum += nums[i];
            maxnum = max(sum, maxnum);
            
            if (sum < 0) sum = 0;
        }
        return maxnum;
    }
};


/*

INT_MIN is the minimum integer value, INT_MAX is the maximum

max() keeps comparing the sum vs the previous lowest number

We start at the lowest possible value, then set the variable to our next highest sum value, and then return it after iterating through all possible subarrays.

*/
//Leetcode 88. Merge Sorted Array (Easy)

#include <vector>

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin() + m, nums1.end());
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
    }
};

/*

this is 0ms runtime?!?!

erase removes the elements from the vector from a to b

insert does what it sounds like, use it for vector merging

sort is nondescending order

*/
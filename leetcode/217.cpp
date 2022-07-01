//Leetcode 217. Contains Duplicate (Easy)

#include<bits/stdc++.h>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> uniqueSet(nums.begin(), nums.end());
        if (uniqueSet.size() != nums.size()){
            return true;
        }
        return false;
    }
};

/*

.size() can be used for both vectors and sets

Sets have no duplicate elements

.begin() and .end() are pointers towards the first/last elements of a vector

*/
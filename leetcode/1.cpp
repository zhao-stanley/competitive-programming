//Leetcode 1. TwoSum

#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> arrVals;
        vector<int> sol;
        
        for (int i = 0; i < nums.size(); i++){
            int rem = target - nums[i];
            auto it = arrVals.find(rem);
            if (it != arrVals.end()) {
                sol.push_back(i);
                sol.push_back(it->second);
                return sol;
            } else {
                arrVals.insert({nums[i], i});
            }
        }
        return sol;
    }
};

/*

learned what a hashmap is!!!
- key, value pair (like a table/object)
use unordered_map to make one, put the data type in between the < >

auto means let the compiler figure out the type of the variable

we store the index of the remainder into the variable "it"

find() range is [first, last), but last is actually like the size of an array/vector
- the size of vector "n" is 5, but the last index is 4

end() represents that "last" value essentially --> the size or last index + 1
- cend() is the same thing, just a constant iterator (can't be modified)

if our variable "it" equals the "last" value, that means we didn't find the element
- if that happens, we add the key, value pair to the hashmap --> key: arr[i], value: i
    - we do this after we check because we can't reuse the element we just checked

- if we don't end up at our last value, then that means we found the complimentary value --> add both values to the solution vector

we can use insert({key, value}) to add to the hashmap

*/
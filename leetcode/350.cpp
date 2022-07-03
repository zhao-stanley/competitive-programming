//Leetcode 350. Intersection of Two Arrays II (Easy)

#include <unordered_map>

class Solution {

    public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> arrVals;
        vector<int> sol;
        
        for(auto i : nums1){
            arrVals[i]++;
        }
        
        for (auto i : nums2){
            if(arrVals[i] > 0){
                sol.push_back(i);
                arrVals[i]--;
            }
        }
        
        return sol;
    }
};

/*

We are going to utilize hashmap again wooo

Iterate through the first array, and for every integer, we will create a key,value pair for it
    - in this case, arrVals[i]++ will increment the value for the key "i", i being each integer in the array;
        - For example, arrVals[2]++ would increment this pair in the hashmap: {2, 0} --> {2, 1}
        
Then iterate through the second array, using the integers from the second array as keys to lookup in the hashmap.
    - if those integers have a matching value more than 1, that means we previously encountered this integer in the first array
        - therefore, we can add this key to the solution array, because we encountered this in both arrays (intersection)
        - then we decrement the key value pair because duplicates can occur (at different indexes)

*/
// ==========================================================
// 1. Two Sum
// Difficulty : Easy
// Language   : C++
// Solution   : #2
// Runtime    : 5 ms (Beats 45%)
// Memory     : 16.1 MB (Beats 6%)
// Link       : https://leetcode.com/problems/two-sum/
// ==========================================================

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            numMap[nums[i]] = i;
        }
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement) && numMap[complement] != i) {
                return {i, numMap[complement]};
            }
        }

        return {};
    }
};
// ==========================================================
// 1. Two Sum
// Difficulty : Easy
// Language   : C++
// Solution   : #3
// Runtime    : 7 ms (Beats 42%)
// Memory     : 15.9 MB (Beats 6%)
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
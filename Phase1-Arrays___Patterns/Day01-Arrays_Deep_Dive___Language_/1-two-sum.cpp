/*
 * Problem:  1. Two Sum
 * URL:       https://leetcode.com/problems/two-sum/
 * Language:  C++
 * Status:    Accepted
 * Runtime:   4 ms  (beats 53.7%)
 * Memory:    14648000  (beats 60.7%)
 * Date:      2025-10-12
 * Context:  Day 1 — Arrays Deep Dive + Language Setup
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp.find(target - nums[i]) != mp.end()){
                return {mp[target - nums[i]], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
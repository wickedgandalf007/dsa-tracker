/*
 * Problem:  560. Subarray Sum Equals K
 * URL:       https://leetcode.com/problems/subarray-sum-equals-k/
 * Language:  C++
 * Status:    Accepted
 * Runtime:   27 ms  (beats 98.9%)
 * Memory:    45316000  (beats 68.7%)
 * Date:      2026-01-04
 * Context:  Day 1 — Arrays Deep Dive + Language Setup
 */

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        mp[0] = 1;
        int ans = 0, curr_sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            curr_sum += nums[i];
            if(mp.count(curr_sum - k)){
                ans += mp[curr_sum - k];
            }
            mp[curr_sum]++;
        }
        return ans;
    }
};
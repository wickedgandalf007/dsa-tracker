/*
 * Problem:  15. 3Sum
 * URL:       https://leetcode.com/problems/3sum/
 * Language:  C++
 * Status:    Accepted
 * Runtime:   53 ms  (beats 34.4%)
 * Memory:    29080000  (beats 71.7%)
 * Date:      2025-10-27
 * Context:  Day 2 — Two Pointer Pattern
 */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        int sz = nums.size();
        for(int i = 0 ; i < sz - 2 ; i++){
            if(i != 0 && nums[i - 1] == nums[i]){
                continue;
            }
            int start = i;
            int mid = i + 1;
            int end = sz - 1;
            while(mid < end){
                int sum = nums[start] + nums[mid] + nums[end];
                if(sum == 0){
                    ans.push_back({nums[start], nums[mid], nums[end]});
                    mid++;
                    while(mid < end && nums[mid] == nums[mid - 1])mid++;
                    end--;
                    while(end > mid && nums[end] == nums[end + 1])end--;
                }
                else{
                    if(sum > 0){
                        end--;
                        while(end > mid && end < sz - 1 && nums[end] == nums[end + 1])end--;
                    }else{
                        mid++;
                        while(mid < end && nums[mid] == nums[mid - 1])mid++;
                    }
                }
            }
        }
        return ans;
    }
};
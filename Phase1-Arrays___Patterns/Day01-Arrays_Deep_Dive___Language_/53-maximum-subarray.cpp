/*
 * Problem:  53. Max Subarray (Kadane's)
 * URL:       https://leetcode.com/problems/maximum-subarray/
 * Language:  C++
 * Status:    Accepted
 * Runtime:   87 ms  (beats 5.2%)
 * Memory:    68168000  (beats 100.0%)
 * Date:      2023-11-04
 * Context:  Day 1 — Arrays Deep Dive + Language Setup
 */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsofar = 0, maxuntilnow = INT_MIN;
        int sz = nums.size();
        for(int i = 0 ; i < sz ; i++){
            if(maxsofar < 0){
                maxsofar = 0;
            }
            maxsofar += nums[i];
            maxuntilnow = max(maxuntilnow, maxsofar);
        }
        return maxuntilnow;
    }
};
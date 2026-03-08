/*
 * Problem:  11. Container With Most Water
 * URL:       https://leetcode.com/problems/container-with-most-water/
 * Language:  C++
 * Status:    Accepted
 * Runtime:   3 ms  (beats 35.2%)
 * Memory:    63064000  (beats 10.8%)
 * Date:      2025-10-17
 * Context:  Day 2 — Two Pointer Pattern
 */

class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, end = height.size() - 1;
        int ans = 0;
        while(start < end ){
            int x = min(height[start], height[end]);
            ans = max(ans, (end - start) * x);
            if(height[start] > height[end]){
                end--;
            }else{
                start++;
            }
        }
        return ans;
    }
};
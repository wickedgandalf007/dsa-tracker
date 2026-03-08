/*
 * Problem:  3. Longest Substring Without Repeating
 * URL:       https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Language:  C++
 * Status:    Accepted
 * Runtime:   21 ms  (beats 20.8%)
 * Memory:    16936000  (beats 9.2%)
 * Date:      2025-10-13
 * Context:  Day 3 — Sliding Window Pattern
 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>si;
        int maxi = 0;
        int left = 0, right = 0;
        for(right = 0 ; right < s.size() ;){
            while(right < s.size() && !si.count(s[right])){
                si.insert(s[right]);
                right++;
            }
            maxi = max(maxi, right - left);
            while(si.count(s[right])){
                si.erase(s[left]);
                left++;
            }
        }
        maxi = max(maxi, right - left);
        return maxi;
    }
};
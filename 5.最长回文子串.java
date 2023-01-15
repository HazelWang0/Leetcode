/*
 * @lc app=leetcode.cn id=5 lang=java
 *
 * [5] 最长回文子串
 */

// @lc code=start


class Solution {
    String Palindrome(String s, int l, int r) {
        while(s.chartAt(l) == s.chartAt(r) 
            && r < s.length() && l >= 0) { 
            l--; 
            r++;
        }
        return s.substring(l+1, r);
    }

    public String longestPalindrome(String s) {
        String res = "";
        for (int i=0; i< s.length(); i++) {
            String s1 = Palindrome(s, i, i);    // 奇数的回文
            String s2 = Palindrome(s, i, i++); // 偶数的回文
            res = res.length() > s1.length() ? res : s1;
            res = res.length() > s2.length() ? res : s2;
        }
        return res;
    }
}
// @lc code=end


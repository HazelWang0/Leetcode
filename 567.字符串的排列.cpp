/*
 * @lc app=leetcode.cn id=567 lang=cpp
 *
 * [567] 字符串的排列
 */

#include <limits.h>
#include <iostream>
#include <unordered_map>
using namespace std;

// @lc code=start
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> need, window;
        for (char i: s1) need[i]++;

        int left = 0, right = 0;
        int valid = 0;  // 注意这个valid维护的不是window中被need需要的字符个数，而是指need中所需数量与window中已有数量一致的字符个数！！

        while(right < s2.size()) {
            right++;
            char a = s2[right];
            /*
            v1.0 错误写法
            */
            // if (need.count(a)) {
            //     window[a]++;
            //     valid++;
            // } 

            /*正确写法*/
            if (need.count(a)) {
                window[a]++;
                if (window[a] == need[a])
                    valid++;  //此时valid只加不减，满额了也不变
            }


            while(valid==need.size() & right-left>0) {     // 本题 [left, right) 维护的是一个定长的窗口，所以 while 可以改成 if
            // while(valid>need.size() & right>left) { // v1.0错误
                if (right-left == s1.size())      // v2.0注意，要先判断，再操作left
                    return true;
                left++;
                char d = s2[left];
                if (need.count(d)) {
                    if (window[d]<need[d])  // window的记录中d的数量小于所需d的数量，此时valid开始减少
                        valid--;   
                    window[d]--;
                } 
            }

        }

        return false;

    }
};

// failed case:
// "ab"
// "eidboaoo"

// @lc code=end


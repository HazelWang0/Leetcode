/*
 * @lc app=leetcode.cn id=76 lang=cpp
 *
 * [76] 最小覆盖子串
 */

// @lc code=start

#include <limits.h>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        //最终是通过维护的valid数量是否和所需字符一致进行判断
        unordered_map<char, int> need, window; //哈希表，count(key)用来判断key是否存在，map[key]来访问键值
        for (char c : t) need[c]++;

        int left = 0, right = 0;
        int valid = 0;
        int start = 0, len = INT_MAX; // 记录找到的字符串起始位置和长度
        while (right < s.size()) {
            char c = s[right];
            if (need.count(c)) {
                window[c]++;
                if (window[c] == need[c])
                    valid++;    // 记录有效字符的数量
            }
            right++;

            while (valid == need.size()) {
                if (right - left < len) {   // left前进了，更新start
                    start = left;
                    len =  right - left;
                }

                char d = s[left];
                //判断是否要进一步更新维护的valid，减除冗余字符，跳出循环
                if (need.count(d)) {
                    if (window[d] == need[d]) {
                        valid--;
                    }
                    window[d]--;
                }
                left++;
            }
        }
        return len == INT_MAX ? "" : s.substr(start, len);  // len如果没变返回空字符串，反之子字符串
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

using namespace std;

// @lc code=start
class Solution {
    // 递归，每个数代表以它为右边界的子序列最长长度
    // [0,1,0,3,2,3]
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> getLength(nums);
        getLength[0] = 1;
        if ( nums.size() == 1) return 1;
        for (int i=1; i<nums.size(); i++) {
            int res = 0;
            for (int j = i-1; j>=0; j--) {
                    if(nums[i]>nums[j]) {
                        res = max(res, getLength[j]);
                    }
                }
            getLength[i] = res+1;
        }
        
        int res = 0;
        for (int i=0; i<nums.size(); i++) {
            cout<< getLength[i]<<endl; 
            res = max(res, getLength[i]);
        }
        return res;
    }
};
// @lc code=end


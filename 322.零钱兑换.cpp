/*
 * @lc app=leetcode.cn id=322 lang=cpp
 *
 * [322] 零钱兑换
 */
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        return changCoins(amount, coins, amount);
    }

    int changCoins(int amount, vector<int>& coins, int cur_amout) {
        if (cur_amout < 0 ) return -1;
        if (cur_amout == 0) return 0;

        int nums = INT_MAX;
        for (int coin: coins) {
            // cout<<nums<<endl;
            int sub = changCoins(amount, coins, cur_amout-coin);
            if (sub == -1) continue; // 减少不满足的条件中0的影响
            // int sub = changCoins(amount, coins, cur_amout-coin) + 1;
            // if (sub == 0) continue; // 减少不满足的条件中0的影响
            nums = min(sub + 1, nums); // 题目要求的是至少
            // cout<<coin<<": "<<nums<<endl;
        }
        return nums = INT_MAX? -1: nums;
    }
};
// @lc code=end


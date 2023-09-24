/*
 * @lc app=leetcode.cn id=518 lang=cpp
 *
 * [518] 零钱兑换 II
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
// [不能这么做, 因为会有重复的情况在]每次都在所有面额中循环一遍, base case超出总金额, 需要加备忘录
public:
    int change(int amount, vector<int>& coins) {
        return changCoins(amount, coins, amount);
    }

    int changCoins(int amount, vector<int>& coins, int cur_amout) {
        if (cur_amout < 0 ) return 0;
        if (cur_amout == 0) return 1;

        int nums = 0;
        for (int coin: coins) {
            // cout<<nums<<endl;
            nums = changCoins(amount, coins, cur_amout-coin);
            // cout<<coin<<" "<<nums<<endl;
        }
        return nums;
    }
    
};
// @lc code=end


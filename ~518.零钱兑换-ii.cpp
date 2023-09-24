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
// 注意正着写会越界!!! 只能倒着写
public:
    int change(int amount, vector<int>& coins) {
            int n = coins.size();
            int dp[n + 1][amount + 1];
            // base case
            for (int i = 0; i <= n; i++) 
                dp[i][0] = 1;

            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= amount; j++)
                    if (j - coins[i-1] >= 0)
                        dp[i][j] = dp[i - 1][j] 
                                + dp[i][j - coins[i-1]];
                    else 
                        dp[i][j] = dp[i - 1][j];
            }
            return dp[n][amount];

            
        // int dp[coins.size()+1][amount+1]; // 注意, 默认值为0

        // for (int i=0; i<coins.size(); i++) {
        //     dp[i][0] = 1;
        // }
        
        
        // for (int i=0; i< coins.size(); i++){
        //     for (int j = 0; j <= amount; j++) {
        //         if (j-coins[i] >= 0) {
        //             dp[i][j] = dp[i][j-coins[i]] + 1 + //用这个面额
        //                             dp[i-1][j]; // 不用这个面额
        //         }
        //     }
        // }
        // return dp[coins.size()][amount];
    }
};
// @lc code=end


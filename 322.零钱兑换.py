#
# @lc app=leetcode.cn id=322 lang=python3
#
# [322] 零钱兑换
#

# @lc code=start
class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        self.dp = []
        if len(self.dp) <= amount:
            self.dp = [0 for _ in range(amount+1)]
        return self.change(coins, amount)

    def change(self, coins, amount):
        if amount < 0:
            return -1
        if amount == 0:
            return 0
        if (self.dp[amount] != 0): 
            return self.dp[amount] # 注意这个判断不能进下面的循环，因为存在下标为负的情况
        tol_num = -1
        for _, i in enumerate(coins):
            cur_num = self.change(coins, amount-i)+1 if self.change(coins, amount-i)>=0 else -1
            tol_num = min(cur_num, tol_num) if (cur_num>0 and tol_num>0) else max(cur_num, tol_num)
        self.dp[amount] = tol_num
        return tol_num
        
        
    '''
    正确但超时:
        Testcase [1,2,5]\n100， 
        expect 20
    '''
    # def change(self, coins, amount):
    #     if amount < 0:
    #         return -1
    #     if amount == 0:
    #         return 0
    #     tol_num = -1
    #     for _, i in enumerate(coins):
    #         cur_num = self.change(coins, amount-i)+1 if self.change(coins, amount-i)>=0 else -1
    #         tol_num = min(cur_num, tol_num) if (cur_num>0 and tol_num>0) else max(cur_num, tol_num)
    #     return tol_num
            

        
# @lc code=end


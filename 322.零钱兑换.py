#
# @lc app=leetcode.cn id=322 lang=python3
#
# [322] 零钱兑换
#

# @lc code=start
class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        self.min_val = int(100) #  float('inf')
        for _, i in enumerate(coins):
            if i < self.min_val: 
                self.min_val = int(i)
        return self.change(coins, amount)
        
    def change(self, coins, amount):
        # print(type(amount))
        if amount == self.min_val:
            return 0
        if amount < self.min_val:
            return -1
        value = 0
        for _, i in enumerate(coins):
            print(i)
            # print(f'value:{value}')
            value = max(self.change(coins, amount-i)+1, value)
        return value
            

        
# @lc code=end


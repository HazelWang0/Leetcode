#
# @lc app=leetcode.cn id=509 lang=python3
#
# [509] 斐波那契数
#

# @lc code=start
class Solution:
    def __init__(self) -> None:
        self.dp = []  # DP table, 长度应该是固定的，这个的初始化不能写进fib中，否则self.dp会从[0,0,0]逐渐变小[0]直到[]
    def fib(self, n: int) -> int:
        if len(self.dp) <= n:
            self.dp = [0 for _ in range(n+1)]
        # print(f'{n}:{self.dp}')
        if (n == 0 or n==1): 
            return n # v2.0 这行没放在前面
        if (self.dp[n-1] != 0): return self.dp[n-1]
        self.dp[n-1] = self.fib(n-1) + self.fib(n-2)  
        return self.dp[n-1]
        # return self.fib(n-1) + self.fib(n-2) v1.0 error 
        
        
        
# @lc code=end


#
# @lc app=leetcode.cn id=51 lang=python3
#
# [51] N 皇后
#

# @lc code=start
class Solution:
    def solveNQueens(self, n: int) -> List[List[str]]:
        used = [False for col in range(n) for _ in col]
        self.res = []
        self.N = n
        track = ['.' for col in range(n) for _ in col]
        self.track(n, track, used)
        return self.res
    
    def swithUse(self, n, col, row, used, ):
        for c in n:  # 这里，后向的不用再作判断了
            used[c][row] = True
            if 0 <= row + c - col< n: used[c][row + c - col] = True
            if 0 <= row + c - col< n: used[c][row - c + col] = True
        
        for r in n:
            used[col][r] = True
            
    
    def track(self, n, track, used):
        for col in n:
            for row in n:
                if col == n and row == n:
                    return self.res.append(track)
                if (used[col, row]):
                    continue
                track[col, row] = 'Q'
                self.swithUse(n, col, row, used, True)
                self.track(n, track, used)
                track[col, row] = '.'
                
# @lc code=end


#
# @lc app=leetcode.cn id=46 lang=python3
#
# [46] 全排列
#

# @lc code=start
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        track = []
        self.res = []
        used = [False for _ in nums]
        self.backtrack(track, nums, used)
        return self.res
    
    def backtrack(self, track, nums, used):
        if len(track) == len(nums):
            return self.res.append(track)
        
        for i in range(len(nums)):  # 不直接用in nums的原因是需要i作为索引
            if (used[i]):
                continue
            track.append(nums[i])
            used[i] = True
            self.backtrack(track, nums, used)  # 深入循环中track值是变化了的
            track.pop()  # 复原track, 移除最后一个元素，以不影响平行循环内其它i的结果
            # del(track[-1])
            # track = track[0:-1]
            used[i] = False
                
        
        
        
# @lc code=end


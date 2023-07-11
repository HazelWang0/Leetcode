#
# @lc app=leetcode.cn id=496 lang=python3
#
# [496] 下一个更大元素 I
#

# @lc code=start
class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        def nextGreater(nums2):
            n = len(nums2)
            res = [0 for _ in range(n)] # 结果
            s = []
            for i in range(n-1, -1, -1):
                while s and s[-1] < nums2[i]:
                    s.pop()
                res[i] = s[-1] if s else -1
                s.append(nums2[i])
            return res
        
        greater = nextGreater(nums2)
        
        # 创建字典
        greaterMap = {}
        for i in range(len(greater)):
            greaterMap[nums2[i]] = greater[i]
        
        res = [0] * len(nums1)  # [0,0,0]
        # print(res)
        for i in range(len(nums1)):
            res[i] = greaterMap[nums1[i]]
        return res        
            
# @lc code=end


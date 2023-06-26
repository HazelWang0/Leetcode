#
# @lc app=leetcode.cn id=797 lang=python3
#
# [797] 所有可能的路径
#

# @lc code=start
class Solution:
    '''完全错误的解法，一条分支只会走一次'''
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        self.n = len(graph)
        self.path = []
        self.childpath = []
        self.traverse(graph, 0)
        return self.path

                 
    def traverse(self, graph, s):
        self.childpath.append(s)
        
        if s == self.n-1:
            self.path.append(self.childpath.copy())
            # self.childpath.pop()
            # return  
        
        for v in graph[s]:
            self.traverse(graph, v)
        
        self.childpath.pop()
        
        
        
        
# def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
'''错误,第一个0出也要加入递归'''
    #     self.n = len(graph)
    #     self.path = []
    #     for i in range(len(graph[0])):
    #         # print(i)
    #         self.isretreive = False
    #         self.childpath = [0]
    #         self.traverse(graph, 0, i)
    #         self.path.append(self.childpath)
    #     return self.path

                 
    # def traverse(self, graph, s, node):
    #     child = graph[s][node]
    #     self.childpath.append(child)
        
    #     if s == self.n-2:
    #         self.isretreive = True
    #         return
        
    #     # print(f"child:", child)
    #     for j in range(len(graph[child])):
    #         self.traverse(graph, child, j)
    #         if self.childpath in self.path:
    #             self.isretreive = False
    #             continue
            
    #         if self.isretreive:
    #             return
    #     # print(f"childpath:", self.childpath)
        
# @lc code=end


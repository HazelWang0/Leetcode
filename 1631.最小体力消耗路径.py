#
# @lc app=leetcode.cn id=1631 lang=python3
#
# [1631] 最小体力消耗路径
#

# @lc code=start

import heapq
from typing import List

class State:
    def __init__(self, x, y, dis) -> None:
        self.x = x
        self.y = y
        self.dis = dis
        
class Solution:
    def adj(self, x, y, heights):
        dirs = [[1,0],[-1,0],[0,1],[0,-1]]
        adjcents = []  
        
        # @没有考虑索引越界的情况
        
        adjcents.append([x + dir[0], y+dir[1]] for dir in dirs)
        return adjcents
    
    def minimumEffortPath(self, heights: List[List[int]]) -> int:
        graph = [[[float("inf")] for _ in range(len(heights[0]))] for _ in range(len(heights))] # tilizhi，之所以需要设置，第一：是因为需要有个体力值的索引表，只是有个State组成的最有队列是无法索引的； 第二：队列里面的值不是实时更新的，而graph一定是最新值，两者有滞后差异
        
        
        #abs_height = lambda x, y, x_near, y_near: abs(heights[y_near][x_near]- heights[x][y])
        # @这步是不是多余的啊？？？？
        abs_height = lambda x, y, x_near, y_near: max(graph[x][y], abs(heights[y_near][x_near]- heights[x][y]))
        
        pq = heapq.heapify(State(0, 0, abs_height(0,0,0,0)))
        
        while pq:
            cur_node = heapq.heappop()
            
            # @到达终点
            # if cur_node == [len(heights[0]),len(heights)]:
            if (cur_node.x, cur_node.y) == (len(heights)-1,len(heights[0])-1):
                return cur_node.dis
            
            # @如果队列里的node值不是最新的，直接跳过
            
            # @MISS
            if cur_node.dis > graph[neighbor.x, neighbor.y]:
                continue
            # @MISS
            
            for neighbor in self.adj(cur_node.x, cur_node.y, heights):
                ab_h = abs_height(cur_node.x, cur_node.y, neighbor.x, neighbor.y)
                
                if ab_h < graph[neighbor.x, neighbor.y]:
                    # update heap
                    graph[neighbor.x, neighbor.y] = ab_h
                    heapq.heappush(pq, State(neighbor.x, neighbor.y, ab_h))
                
        return -1
        
        
        
        
            

# @lc code=end


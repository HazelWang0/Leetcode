/*
 * @lc app=leetcode.cn id=1254 lang=cpp
 *
 * [1254] 统计封闭岛屿的数目
 */
#include <string>
#include <vector>
#include <math>
using namespace std;

// @lc code=start
class Solution {
    // 对1的网格进行深度优先遍历,如果碰到了边缘,则返回-1, 这个网格不可行;同时遍历过的1进行标记
public:
    int closedIsland(vector<vector<int>>& grid) {
        vector<vector<int>> memo;

        for (int i=1; i<m-1;i++) { //边缘不遍历了
            for (int j=1; j<n-1;j++) {
                int res = expand(i, j, memo, m, n, grid);
            }
        }
    }

    void expand(int k, int q, vector<vector<int>>& memo, vector<vector<int>>& grid) {
        int m = grid.size(); //长 
        int n = grid[0].size(); //宽 
        if (k==-1 || k == m || q == -1 || q==n) return; // 超出边界
        if (memo[k][q]) return; 
    
        memo[k][q] = 1;
        expand(k+1, q, memo, grid);
        expand(k-1, q, memo, grid);
        expand(k, q+1, memo, grid);
        expand(k, q-1, memo, grid);
    }
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=200 lang=cpp
 *
 * [200] 岛屿数量
 */
#include <string>
#include <vector>

using namespace std;

// @lc code=start
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> memo;
        int m = grid.size(); //长 
        int n = grid[0].size(); //宽
        int res = 0;
        for (int i=0; i<m;i++) { //边缘不遍历了
            for (int j=0; j<n;j++) {
                if (grid[i][j]=='1') { // 不与其它的岛屿连接的
                    res += 1;
                    dfs(i, j, grid);
                }
            }
        }
        return res;
    }

    void dfs(int k, int q, vector<vector<char>>& grid) {
        int m = grid.size(); //长 
        int n = grid[0].size(); //宽 
        if (k==-1 || k == m || q == -1 || q==n) return; // 超出边界
        if (grid[k][q]=='0') return; 
    
        grid[k][q] = '0'; // 相连的岛屿变成水
        dfs(k+1, q, grid);
        dfs(k-1, q, grid);
        dfs(k, q+1, grid);
        dfs(k, q-1, grid);
    }
};  

// @lc code=end


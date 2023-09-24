/*
 * @lc app=leetcode.cn id=1462 lang=cpp
 *
 * [1462] 课程表 IV
 */

// @lc code=start
class Solution {
private:
vector<int>* buildGraph(int numCourses, vector<vector<int>>& prerequisites) {
    auto graph = new vector<int>[numCourses];
    // 初始化
    for (int i = 0; i<numCourses; i++) {
        graph[i] = vector<int>();
    }

    for (auto pre: prerequisites) {
        graph[pre[0]].push_back(pre[1]);
    }
    return graph;
}

bool dfs(int cla, int tar, vector<int>* graph, vector<vector<int>>& queries, vector<bool> visited) {
    if(visited[cla]) return false; 

    for(int i = 0; i< graph[cla].size(); i++) {
        if (tar == graph[cla][i]) return true; 
        bool res = dfs(graph[cla][i], tar, graph, queries, visited);
        if (res) return true;
    }
    return false;
    }



public:
//不要用链表
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<int>* graph = buildGraph(numCourses, prerequisites);
        vector<bool> res; 

        for (auto que: queries) {
            vector<bool> visited;
            res.push_back(dfs(que[0], que[1],graph, queries, visited));
        }

        return res;
    }
};
// @lc code=end


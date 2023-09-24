/*
 * @lc app=leetcode.cn id=341 lang=cpp
 *
 * [341] 扁平化嵌套列表迭代器
 */

// @lc code=start
/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
    // 有error报错
public:
    vector<int> res; 
    vector<int>::iterator it;

    NestedIterator(vector<NestedInteger> &nestedList) {
        dfs(nestedList);
        it = res.begin();
    }

    void dfs(vector<NestedInteger> &list) {
        for (int i = 0; i < list.size(); i++) {
            if (list[i].isInteger()) {
                res.push_back(list[i].getInteger());
                } // 不能return; for循环内的return了后面的迭代不了了
            else {dfs(list[i].getList());} // 前序遍历
        }
        return;
    }
    
    int next() {
        // res.top(); // vector没有top
        *it++;
    }
    
    bool hasNext() {
        // if (res.size()>0) return true;
        // return false;
        return it != res.end();
    }
};
/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
// @lc code=end


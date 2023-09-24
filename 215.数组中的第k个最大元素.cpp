/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */

// @lc code=start
template <typename Key>
class maxPQ {
private:

public:
    maxPQ(int cap);

    void push(key) ()
}


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // 1. 快速排序法
        // 2. 堆排序
        maxPQ<int, vector<int>, greater<int>> pq; // 小顶堆，顶部是最小元素， 最大的下沉在下面
        // priority_queue<int, vector<int>, greater<int>> pq; // 小顶堆，顶部是最小元素， 最大的下沉在下面
        for (int e: nums) {
            pq.push(e);
            if(pq.size()>k) {pq.pop();}
        }
        return pq.top();
    }
};
// @lc code=end


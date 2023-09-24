/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // 快慢指针，如果快慢不是相同值，慢前进; 注意fast直接和slow比较，会导致最末尾的情况下slow跟进不及时
        int slow = 2;
        int n = nums.size();
        if (n<2) return n;

        for (int quick=2; quick<nums.size();quick++) {
            if (nums[quick] != nums[slow-2]) {
                nums[slow] = nums[quick];
                slow++;
                }
            }
        return slow;
        }
        // 判断末尾
        
};
// @lc code=end


/*
 * @lc app=leetcode.cn id=912 lang=cpp
 *
 * [912] 排序数组
 */

// @lc code=start

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // 快速排序
        shuffle(nums);
        cout<<"don"<<endl;
        sort(nums, 0, nums.size()-1);
        return nums;
    }

    void sort(vector<int>& nums, int start, int end) {
        int part = partition(nums, start, end);
        sort(nums, start, part-1); // 左闭右开
        sort(nums, part, end);
        
    }

    int partition(vector<int>& nums, int start, int end) {
        int com = start;
        int i = start+1, j = end; // 两边往内缩，互相交换
        while( i<j) {
            while(i<end && nums[i]<nums[start]) {
                i++;
            }
            while(j>start && nums[j]>=nums[start]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        // 最后把nums[start]放在合适位置，边元素较小，右边元素较大
        swap(nums[start], nums[j]);

        return j;// 返回
    }

    void swap(int & a, int & b) {
        int temp = a;
        a = b;
        b = temp;
    }
    // void swap(vector<int>& nums, int a, int b) {
    //     int temp = nums[a];
    //     nums[a] = nums[b];
    //     nums[b] = temp;
    // }

    void shuffle(vector<int>& nums) {
        srand((unsigned) time(NULL));
        int n =nums.size();
        for (int i = 0; i< n; i++) {
            int r = i + rand()%(n-1);
            cout<< rand()<<endl;
            swap(nums[i], nums[r]);
        }
    }
};
// @lc code=end


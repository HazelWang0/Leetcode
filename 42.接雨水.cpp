/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start

// 测试用例通过了，但耗时太长。

class Solution {
public:
    int trap(vector<int>& height) {
        // 对每个点，找左右两侧的max值，用一个哈希维护这个值，不重复计算
        // corner n = 1
        unordered_map<int, int> map;
        int n =  height.size();
        if (n == 1) return 0;
        for (int i = 0; i<n-1; i++) {
            if (map.count(i)) continue;
            int l = i, r = i+1;
            int l_max = height[i], r_max = height[i+1];
            int l_max_id = i, r_max_id = i+1; // n=1
            while(l>=0 && r<n) {
                while (l_max >= r_max && r<n) {  // 左边高于右边界， 更新右边界
                    if(height[r]==height[r_max_id]) r_max_id = r;
                    r_max = max(height[r], r_max);
                    if (height[r_max_id] != r_max) { // 但是如果是相同值呢！！
                        r_max_id = r;   
                    }
                    r++;                   
                }
                // cout<<"r_done"<<endl;
                cout<<"r_done"<<l_max<<r_max<<r<<r_max_id<<endl;
                while (l_max<=r_max && l>=0) {
                    if(height[l]==height[l_max_id]) l_max_id = l;
                    if(l==l_max_id) l_max_id = l;
                    l_max = max(l_max, height[l]);
                    if (height[l_max_id] != l_max) {
                        l_max_id = l;
                    } // 换了
                    l--;    
                }
            }
            cout<<l_max_id<<"~"<<r_max_id<<endl; 

            for (int j = l_max_id; j<=r_max_id; j++) {
                if (map.count(j)) continue;
                int btl = min(l_max, r_max);
                map[j] = btl > height[j] ? btl -height[j] : 0;
                cout<<map[j]<<" "; 
            }
        }
        cout<< endl;
        int res=0;
        for (int i = 0; i < n; i++) {
            res += map[i];
            cout<<map[i]<<" "; 
        }
        return res;
    }
};
// @lc code=end


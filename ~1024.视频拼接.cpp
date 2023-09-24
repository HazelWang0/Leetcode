/*
 * @lc app=leetcode.cn id=1024 lang=cpp
 *
 * [1024] 视频拼接
 */
#include <vector>
#include <algorithm> 
#include <iostream> 
// #include<bits/stdc++.h>
using namespace std; // 必加，否则爆红

// @lc code=start
class Solution {
public:
// 思路，按左端点从小到大排序，选择一个后如果它的右端点大于下一个左端点，则+1，选择下一个左端点，直到选完
    int videoStitching(vector<vector<int>>& clips, int time) {
        //排序
        sort(clips.begin(), clips.end(), [] (const vector<int>&a, const vector<int>&b) {
            // cout<<"here: "<< a[0]<<" "<<b[0]<<endl;
            if (a[0] == b[0]) {
                return a[1] > b[1]; // 比较右端大小, 大的优先
            }
            else {
                return a[0] < b[0]; // 比较左边大小， 小的优先(升序)
            }
        });

        // 使用for循环遍历vector并打印每个元素
        for (int i = 0; i < clips.size(); ++i) {
            cout<<clips[i][0]<<clips[i][1]<<" ";
        }
        cout<<endl;

        int res = 0; 
        int i = 0;
        int pre_clip = 0, temp_pre_clip = 0; // 上一帧的结尾
        int n = clips.size();
        while (i <= n-1 && pre_clip < time) { //while循环最后一个跳出循环的条件是不能取的,所以你要放在最后
            // clip = clips[i][0];
            // cout<<clip<<endl;
            while(i <= n-1 && clips[i][0] <= pre_clip) { // 不满足的情况
                temp_pre_clip = max(temp_pre_clip, clips[i][1]);
                i++; // 取满足条件的区间中，右端点最大的
                cout<<i<<endl;
            }

            pre_clip = temp_pre_clip;
            cout<<"pre_clip:"<<pre_clip<<endl;
            res++;

            if (i <= n-1 && clips[i][0]>pre_clip && pre_clip < time) // 断层情况, 同时考虑虽然断层,但是最右端已经大于需求的情况, while类型的多家一个条件,都要重新考虑
            {

                return -1;
            }
        }
        return pre_clip >= time ? res: -1; // 加起来不够情况
    }
};
// @lc code=end


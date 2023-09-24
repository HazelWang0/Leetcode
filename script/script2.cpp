#include <iostream>
#include <vector>
#include <algorithm> 
// #include<bits/stdc++.h>
using namespace std; // 必加，否则爆红



int Poster(int n, vector<vector<int>>& poster) {
    // 先排序, 按左边界排, 然后迭代求右边界是否小于上一个左边界,是就删除
    // sort(poster.begin(), poster.end(),[] (const vector<int>& a, const vector<int>& b) { 
    //     if (a[0] == a[0]) {
    //         return a[1]<a[0];
    //     }
    //     else return a[0] > a[1];
    //     });
    sort(poster.begin(), poster.end(), [] (const vector<int>&a, const vector<int>&b) {
        // cout<<"here: "<< a[0]<<" "<<b[0]<<endl;
        if (a[0] == b[0]) {
            return a[1] > b[1]; // 比较右端大小, 大的优先
        }
        else {
            return a[0] < b[0]; // 比较左边大小， 小的优先(升序)
        }
    });

    int i = 1;
    int l = poster[0][0];
    int r = poster[0][1];
    int res = 1;
    // for(int i=0; i<n;i++) {
    //     for (int j=0; j<2;j++) {
    //         cout<<poster[i][j];
    //     }
    //     cout<<endl;
    // }

    while(i<n) {
        if (poster[i][1]<=r) {
            i++;
        }
        else {
            r = poster[i][1];
            // cout<<r;
            res++;
        };
    }
    return res;
}

int main() {
    int n,temp;
    cin >> n;
    vector<vector<int>> pos(n,vector<int>(2));
    for(int i=0; i<n;i++) {
        for (int j=0; j<2;j++) {
            cin>>temp;
            pos[i][j] = temp;
        }
    }
    // for(int i=0; i<n;i++) {
    //     for (int j=0; j<2;j++) {
    //         cout<<pos[i][j];
    //     }
    //     cout<<endl;
    // }

    int res = Poster(n, pos);
    cout << res<< endl;
}
// 64 位输出请用 printf("%lld")
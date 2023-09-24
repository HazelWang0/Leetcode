#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <iostream> 
// #include<bits/stdc++.h>
using namespace std; // 必加，否则爆红


vector<string> pushDomi(vector<string> dom) {
    //左数组,记录左侧 右数组,记录右侧
    int n = dom.size();
    vector<int> l_sum ;
    vector<int> r_sum ;
    vector<string> res ;
    for (int i = 0; i< n; i++) {
        if (dom[i] == 'R' || dom[i] == 'L' ) {
            r_sum = 0;
            right[i] = r_sum;
        }
        r_sum++;
    }
    for (int i = n-1; i>= 0;i--) {
        if (dom[i] == 'R' || dom[i] == 'L' ) {
            l_sum = 0;
            left[i] = l_sum;
        }
        l_sum++;
    }
    for (int i = 0; i< n; i++) {
        if (l_sum[i] == 0 && r_sum[i]) {
            res[i] = '.';
        }
        if (l_sum[i] > r_sum[i]) {
            res[i] = '.';
        }
        if (l_sum[i] < r_sum[i]) {
            res[i] = '.';
        }
    }
    return res;
}
    
    
int main() {
    vector<string> a;
    while (cin >> a) { // 注意 while 处理多个 case
        cout<<pushDomi(a)<<endl;
    }

}
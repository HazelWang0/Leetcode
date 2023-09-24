

本地debug


// https://www.cnblogs.com/libxing/p/16664963.html
//  https://blog.csdn.net/weixin_40271376/article/details/115716358?utm_medium=distribute.pc_relevant.none-task-blog-2~default~baidujs_baidulandingword~default-1-115716358-blog-119514237.235^v38^pc_relevant_sort_base3&spm=1001.2101.3001.4242.2&utm_relevant_index=2



## 原则
cin>>x  
跳过space/tab/enter，遇到换行符时停止 
是从缓冲中读取的
输入数字或者char
输入string， 遇到space/tab/enter结束，但不会吃掉，下次继续
读取string对象时，string对象会自动忽略开头处的空白（即空格符、换行符、制表符等），并从第一个真正的字符开始读起，直到遇见下一处空白为止，认为为一个字符串

getline(cin,x)  
include<string>头文件
读入space/tab，遇到ENTER停止； 会丢弃换行符






## case

vector输入

```
int data;
std::vector<in> datas;
while (std::cin >> data)  # 当输入不是整数时候结束，或ctrl + z, 每次读取一个数据，碰到空格停止，如 55 29 20
{
	datas.push_back(data);
}
```

string输入
```
std::string str1;o
getline(cin, str1);
```





https://blog.csdn.net/qq_35260390/article/details/119514237




```
输入
	4 1 2 3 4				// 这一行有4个数据  下一行有5个数据
	5 1 2 3 4 5
输出
	10
	15

#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            /*逐个读入每一行数据*/
        }
    }
    return 0;
}
```


二维数组
```
int main() {
    int m, n, temp;
    cin >> m;
    cin >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp;
            matrix[i][j] = temp;
        }
    }
    rotate(matrix);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
         cout << endl;
     }
     
     system("PAUSE");
     return 0;
}
```



// 一组有多行输入 ，不知道组数 和 行中元素个数

```
输入
	1 2 3
	4 5
	0 0 0 0 0
输出
	6
	9
	0


#include <iostream>

using namespace std;

int main() {
    int ele;
    while(cin >> ele) {
        int sum = ele;
        // 下面改成getchar() != '\n' 也行
        while(cin.get() != '\n') {				
            cin >> ele;
            sum += ele;
        }
        
        cout << sum << endl;
    }
    return 0;
}

```

// 字符串


```
输入
	5
	c d a bb e
输出
	a bb c d e

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int num;
    cin>>num;
    vector<string> s;
    while(num--){
        string ns;
        cin>>ns;
        s.push_back(ns);
    }
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
    
}

```

没有一行的个数 带空格
一个用例 一行

输入
	a c bb
	f dddd
	nowcoder
输出
	a bb c
	dddd f
	nowcoder


//代码通过cin.get()从缓存中读取一个字节，这样就扩充了cin只能用空格和TAB两个作为分隔符。
//这很精巧。发现是’\n’就知道一行结束了 
```
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<string> s;
    string ns;
    while(cin>>ns){
        s.push_back(ns);
        if(cin.get()=='\n'){
            sort(s.begin(),s.end());
            for(int i=0;i<s.size();i++){
                if(i==s.size()-1)
                    cout<<s[i]<<endl;
                else
                cout<<s[i]<<" ";
            }
             s.clear();
        }
    }
}
```

输入
	a,c,bb
	f,dddd
	nowcoder
输出
    a,bb,c
    dddd,f
    nowcoder
```
# include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<string> vs;
    while(cin>>s) {
        stringstream ss(s);
        while(getline(ss,s,',')) { //不能直接cin.get() == ','
            vs.push_back(s);
        }
        
        sort(vs.begin(),vs.end());

        for(int i=0; i<vs.size()-1;i++) {
            cout<<vs[i]<<",";
        }
        cout<<vs.back()<<endl; // 最后一个不能有','
        vs.clear();
    }
    return 0; 
    
}

```


输入数据的长度很大
```
0<a,b<2×10^10
输入 
1 1
输出
2

#include<bits/stdc++.h>
using namespace std;

int main() {
    long a,b;
    while(cin>>a>>b) {
        cout<<a+b<<endl;
    }
    return 0;
}
  
  ```
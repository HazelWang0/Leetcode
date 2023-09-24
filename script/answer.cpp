
#include<bits/stdc++.h>
using namespace std;
int i,j,n;

// memo写法
vector<vector<int>> memo(5, vector<int>(6)); // 默认-1
if (memo[i][j]!=-1) {
    return memo[i][j];
}
memo[i][j] = dp(i-1, j-1);


// switch 写法
switch(i) {
    case 1:
        break;
    case 2:
        break;
}


// 字符转数字
string s = "456"; // string是
int res = 0;
for (int i=0;i<s.size();i++) {
    char c = s[i];
    res = 10 * res + (c-'0');
}


// 万能头文件
#include<bits/stdc++.h>

// 哈希链表LRU
struct Node {
    int key, val;
    Node *next;
    Node(int _key, int _val): key(_key), val(_val) {}
};
unordered_map <int, Node*> map;
Node* head = new Node(-1,-1);
Node* tail = new Node(-1,-1);
int capacity;
head->next = tail;
tail->next = nullptr;

map[i] = head;

map.erase(node->key);
delete node;
Node head = head->next;

// 初始化

// 二叉树写法
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int _val): val(_val), left(nullptr), right(nullptr) {}
};


// 判断是否是int
X.isInteger();

//字符串处理


// 依次取出vector元素，手写iter


// 栈用法
stack<int> stk;
while(!stk.empty()) {
    res += stk.top();
    stk.pop();
}

// 初始int为极大值
int a = INT_MAX;

// 三个数中取min
int min(int a, int b, int c) {
    return min(a, min(b, c));
}

// 降序排列vector
vector<int> a;
sort(a.begin(), a.end(), greater<int>()); //如果是升序排列可以省略

// 将bool的数组转为memo的哈希表，需要转为string：
stringstream ss;
for (bool n: used) {
    ss<<n;
}
string state = ss.string(); //取出string

//stringstream用法
string a = "1_2_3";
stringstream ss(a);
string item;
while (getline(ss, item, '_')) {
    cout<< item << ' ';
}

//优先级队列
priority_queue<int> q; //元素从大到小顺序出队
priority_queue<int, vector<int>, greater<int>> q;

// 二维vector自定义排序
sort(a.begin(), a.end(), [] (const vector<int> &a, const vector<int> &b) {
    if (a[0] == b[0]) {
        return a[1] > b[1];
    }
    else {
        return a[0] < b[0];
    }
});

//直接定义数组，删除new的数组
float *M = new float[4];
delete[] M;

// 定义二维数组
int a[4][5];

// 定义二维数组（非stl）
#define N 2000;

// 定义一维数组（非stl）
int a[1000] = {0};

// 动态数组
vector<int> left(a.begin(), a.begin() + n);

//set集合
set<int> num;
num.insert(5);


// 建立哈希映射


// deque记录结果
deque<TreeNode*> res;
res.emplace_back(root); // 也可以push_back

//二叉树, 找最大值作为root
auto max_it = max_element(a.begin(), a.end());
int max_id = distance(nums.begin(), max_it);
TreeNode* root = new TreeNode(*max_it);


// hashset定义


// 字符串拼接
string s = "abcd";
string s_1 = "haha";
s += s_1;

//翻转字符串
reverse(s.begin(), s.end());

//字符串转为列表

// 数据很大的时候，数据的类型定义（存在溢出）
long long num;

// 二叉树搜索目标
TreeNode* SearchBST(TreeNode* root, int target) {
    if (root == nullptr) return nullptr;
    if (root->val == target) return root;
    TreeNode* left = SearchBST(root->left, target);
    TreeNode* right = SearchBST(root->right, target);
    return left != nullptr? left: right;

}

// 插入节点


// 洗牌算法
static void shuffle(vector<int> & nums) {
    // 设置随机性
    srand((unsigned) time(NULL)); //unsigned 只能是正的，无符号类型能保存2倍于有符号类型的数据, int能存储的数据的范围为-32768~32767，而unsigned能存储的数据范围则是0~65535
    int n = nums.size();
    for (int i = 0; i < n; i++ ) {
        int r = i + rand()%(n-1);
        swap(nums[i], nums[r]);
    }

}

// 原地数组交换
static void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// 二叉堆的接口
priority_queue<int> pq;
priority_queue<int, vector<int>, greater<int>> pq;
pq.top();
pq.pop();
pq.size();
pq.push();


// 多叉树的遍历

//找pq的最近公共父节点
bool find_p = false;
bool find_q = false;
TreeNode* res = find(root, p->val, q->val);
if (!find_q || find_p) {
    if ()
}

// 迭代字典
unordered_map<char, int> dict;
for(auto it: dict) {
    cout<<it.first<<it.second<<endl;
}


// 截取string的部分
string s;
if (s.substr(i, len) == word) {
    track.push_back(word);
    backtrack(s, i+len);
    track.pop_back();
}

// 匹配字符串

// 按方向递归二维数组
vector<vector<int>> dir = {{-1,0}, {1,0}, {0,-1}, {0,1}};
for (auto d: dir) {
    int next_i = i + d[0];
    int next_j = j + d[1];
    dfs...
} 

// char的写法 


// 写判断0<x<5的while


// 快速排序的swap


















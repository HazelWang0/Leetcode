# UPDATE
- Jan.10   [删除链表的倒数第 N 个结点](19.删除链表的倒数第-n-个结点.py)     
    > **虚拟头+快慢指针**:    如果慢指针比快指针多慢，就需要再构造一个dummy头增加位置，防止出现快指针出错的情况  
- Jan.10    [876.链表的中间结点](876.链表的中间结点.py)    
    > **快慢指针**:     如果链表长度是偶数，该解法返回的是靠后的节点   
    *理由*：常规链表的跳出循环的条件是当前节点是null，本题检查当前节点和下一节点是否为null，如果从head开始判断，就是先偶后奇的顺序。  
- Jan.11    [76.最小覆盖子串](76.最小覆盖子串.cpp)  
    > **滑动窗口**：    模板  
- Jan.15    [567.字符串的排列](76.最小覆盖子串.cpp)  
    > **滑动窗口**：    需要考虑左窗口开始滑动的条件是什么，true的条件判断放在哪里  
    > 本题 [left, right) 维护的是一个定长的窗口，所以 while 可以改成 if  
    > **bug review**  
- Jan. 19   [5.最长回文子串](5.最长回文子串.java)  
    > **中心扩散+双指针**  
- Jan. 19   [509.斐波那契数](509.斐波那契数.py)   
    > **动态规划+自顶向下递归+重叠子问题**:  重叠子问题,用额外的memo数组来存储已经计算过的值，否则将超时  
    > 注意python的写法  
- Feb. 5   [322.零钱兑换](322.零钱兑换.py)   
    > **动态规划+自顶向下递归+重叠子问题**:  同上，增加判断条件    
- Feb. 5   [46.全排列](46.全排列.py)  
    > **回溯问题**：    模板  
    > **bug review**  
- Feb. 5   [51.n-皇后](51.n-皇后.py)   
    > **回溯问题+只一种解法的情况**：    同上  
    > **bug review**  

- Jun. 26  [所有可能的路径](797.%E6%89%80%E6%9C%89%E5%8F%AF%E8%83%BD%E7%9A%84%E8%B7%AF%E5%BE%84.py)
  - > 模板   

# TIKE  
涉及二分的，思考奇偶  
**链表**    
- 【√】双指针
  > - 合并有序链表  
  > - 单链表分解  
  > - 合并k个有序链表  
  > - 倒数第k个节点  
  > - 单链表的中点      
  > - 判断包含环  
  > - 找环形链表起点 
  > - 判断链表相交, 找到相交点  - *两种方法*   

- 【√】反转链表
  > - 递归反转整个链表  
  > - 【~】反转链表前N个节点  
  > - 反转链表的一部分：递归法翻转
  > - k个一组反转链表：迭代法翻转  

- 【√】其它
  > - 判断回文单链表 - 常规解法；【~】后序遍历解法（入栈）；【~】双指针优化空间复杂度：考虑中点的两种情况，如何恢复原先数据

**数组**  
- 【√】双指针  
  > - 【~】删除有序数组的重复项/链表    
  > - 移除数组元素  
  > - 两数之和-有序数列  - *二分法*  
  > - 反转数组  
  > - 回文串判断  
  > - 最长回文子串  

- 【√】前缀和：原始数组不会改，频繁查询的情况下，优化空间复杂度        
  > - 计算数组区间内元素的和  
  > - 计算二维矩阵中子矩阵的元素之和 

- 差分数组
  > - 区间加法  
  > - 航班预定  
  > - 拼车  

- 二维数组花式遍历  
  > - 旋转二维矩阵   
  > - 螺旋遍历矩阵   
  > - 螺旋生成矩阵  

- 【√】滑动窗口：左闭右开    
  > - 【~】最小覆盖子串  
  > - 字符串的排列  
  > - 找所有字母异位词  
  > - 最长无重复子串  

- Rabin Karp字符匹配算法
  
- 【√】二分搜索： 注意左右边界是否可等，开闭区间，如果是左右闭，保证边界结束时，右边界可以取到，则左右能相等，反之左开右闭，右边界越界，左边界不能和右边界相等（不能同时越界），因此边界结束的情况，左得小于右；常见左闭右开
  > - 寻找一个数  
  > - 寻找左侧边界的二分搜索  
  > - 【~】寻找右侧边界的二分搜索   

- 带权重的随机选择  
  > - 在十天内送达包裹的能力  
  > - 分割数组的最大值  
  > - 狒狒吃香蕉  
  > - 运送货物  
  > - 分割数组  

- 其它
  > - 优势洗牌：田忌赛马  
  > - 常数时间删除-查找数组任意元素  
  > - 避开黑名单的随机数  
  > - 去除重复字母： 单调栈  

**二叉树**
特殊的链表    
- 基础
  > - 二叉树的最大深度  
  > - 二叉树的前序遍历  
  > - 二叉树的直径  
  > - 翻转二叉树  
  > - 填充每个二叉树节点的右侧指针  
  > - 将二叉树展开为链表  
  > - 构造最大二叉树: 前序遍历很容易得到root，中序遍历很容易得到左右子树；通过前序后序遍历结果无法确定唯一的原始二叉树    
  > - 通过前序遍历和中序遍历构造二叉树  
  > - 通过后序遍历和中序遍历构造二叉树  
  > - 通过后序遍历和前序遍历构造二叉树  
  > - 寻找重复的子树
  > - 【~】二叉树的序列化与反序列化: 不明白  

- 归并排序  
  > - 【~】计算右侧小于当前元素的个数 ：只计算在右侧的归并 
  > - 区间和的个数   
  > - 翻转对  
  > - 【~】排序数组：不会  

- 二叉搜索树BST(AVL树，红黑树，自平衡性质；B+树，线段树；中序遍历是升序)  
  > - 寻找第K小的元素  
  > - BST转化累加树  
  > - 判断BST合法性  
  > - 在BST中搜索元素  
  > - 在BST中插入元素  
  > - 在BST中删除元素  
  > - 【~】不同二叉搜索树  
  > - 计算有效BST总数

- 快速排序（就是二叉树的前序遍历）: 空间复杂度为树高 O(NlogN)， 时间复杂度N；快速选择，最好是  O(N)，最差是O(N^2)；引入shuffle避免极端情况，随机化之后的快速选择算法的复杂度可以认为是 O(N)
  > - 【~】排序数组  
  > - 数组中的第K大个最大元素  

- 其它 
  > - 【~】扁平化嵌套列表迭代器（N叉树的遍历）：完善接口    
  > - 【~】最近公共祖先
  > - 计算完全二叉树的节点个数  

**图**
- 基础
  > - 所有可能的路径：有向无环图  
  > - 搜索名人：三种解法 

- 环检测和拓扑排序
  > - 课程表  

- 二分图判定  
  > - 判断二分图  
  > - 可能的二分法  

- 并查集计算连通分量  
  > - 无向图中连通分量的数目：也可以用DFS
  > - 被围绕的区域  
  > - 等式方程的可满足性  


- Dijkstra最短路径(带备忘录的BFS算法)  
  > - 网络延迟时间  
  > - 最小体力消耗路径  
  > - 概率最大的路径  
  > - 毕业旅行省钱算法：可用动规  
  
- 最小生成树  
  > - 最低成本联通所有城市  
  > - 连接所有点的最小费用  

**其它数据结构**
- 单调栈：下一个更大元素，上一个更小元素  
  > - 下一个最大元素  
  > - 每日温度  
  > - 环形数组下一个最大元素  

- 单调队列  
  > - 滑动窗口最大值  

- 前缀树  
  > - 实现前缀树  
  > - 添加与搜索单词  
  > - 单词替换  
  > - 键值映射   

- 优先级队列（二叉堆）
  > - 实现  

- 其它  
  > - LRU缓存  
  > - LFU缓存  
  > - 数据流的中位数  
  > - 队列实现栈  
  > - 栈实现队列  
  > - 设计推特   

**动态规划**
- 基本
  > - 零钱兑换 
  > - 斐波那契数列 
  > - 下降路径最小和  
  > - 【~】单词拆分  
 
- 子序列（如果无法用数学归纳法递推，说明dp数组定义是不恰当的）  
  > - 【~】最长递增子序列： 区间迭代+递归；陷阱:如果子问题变成0~n区间内的最大子序列长度，问题很简单，复杂度为n，但此时新加入一个元素后无法简单地递归，原始区间的最值子序列不一定是新加后的最值子序列了，此时问题变得不确定。因此要把问题单边固定，让子问题中新加元素成为确定的边界，尽管问题会复杂化，复杂度变n^2，但是是可以确定的  
  > - 俄罗斯套娃信封  
  > - 编辑距离  
  > - 不同的子序列  
  > - 最大子数组和 
  > - 最长公共子序列  
  > - 两个字符串的删除操作  
  > - 两个字符串的最小ASCII删除和  
  > - 最长回文子序列  


- 背包 (如果是dp法，可以路径压缩，i的迭代可以忽略，因为可以更新掉; 但j的更新要从后开始，因为二维dp[i][j]是從dp[i-1][j]来的,变一维后正序则从dp[i][j]变来 )
  > - 0-1背包问题  
  > - 【~】分割等和子集： 子集背包问题：bool类型的dp法，可以用表达式  dp[i][j] = dp[xxx] || dp[xx];   
  > - 【~】零钱兑换： 完全背包问题：搞清楚二维遍历，谁先谁后，虽然是每个i都遍历一轮j，但是每个dp[i]的值都是来自dp[i-1]，所以这样本质上是斜的遍历，即同时遍历了i，j，而不是先j后i
  > - 目标和： 
  
- 游戏  
  > - 最小路径和  
  > - 地下城游戏  
  > - 自由之路  
  > - K站中转最便宜的航班 
  > - 正则表达式  
  > - 高楼扔鸡蛋   
  > - 戳气球 
  > - 预测赢家  
  > - 石子游戏    
  > - 四键键盘  
  > - 打家劫舍  
  > - 股票买卖  

- 贪心
  > - 无重叠区间  
  > - 用最少数量的箭引爆气球   
  > - 安排会议室   
  > - 【~】视频拼接  
  > - 【#】跳跃游戏  

**技巧** 
- 暴力搜索（回溯）
  > - 全排列  
  > - N皇后  
  > - 【~】划分为k个相等的子集：回溯和动规的区别，动规不用穷举，只有一种结果/判断是否可行，但回溯需要*撤销选择*，以遍历所有可能进行穷举; 如何尽可能的剪枝; 备忘录剪枝; 我们应该尽量「少量多次」，就是说宁可多做几次选择（乘法关系），也不要给太大的选择空间（指数关系）；做 n 次「k 选一」仅重复一次（O(k^n)），比 n 次「二选一」重复 k 次（O(k*2^n)）效率低很多  
  > - 组合总和  
  > - 子集：元素无重不可复选 ， 元素可重不可复选  
  > - 全排列  
  > - 解数独  
  > - 括号生成  
  > - 二叉树的最小深度
  > - 打开转盘锁（）
  > - 滑动谜题 
  
- 岛屿（和Union-find很像）
  > - 封闭岛屿的数量  
  > - 子岛屿的数量  
  > - 鸟岛的最大面积  
  > - 不同岛屿的数量   

- BFS
  > - 二叉树的最小深度
  > - 打开转盘锁（）
  > - 滑动谜题 

- 数学运算技巧  
  > - 随机算法
  > - 【】模幂

  
**经典面试题** 
- 分治
  > - 为运算表达式设计优先级 

- 其它
  > - 三区间问题  
  > - 分割数组为连续子序列：斗地主  
  > - 煎饼排序  
  > - 字符串相乘  
  > - 实现计算器 
  > - 盛水最多的容器 
  > - 接雨水
  > - 平衡括号字符串 的最少插入次数  
  > - 有效的括号  
  > - 使括号有效的最少添加 
  > - 判定完美矩形  
  > - 调度考生的座位  
  > - 二分查找搞笑判定子序列  
  > - 匹配子序列的单词数  


  



# C++
c++字符串处理更方便, unordered_map 就是哈希表（字典），相当于 Java 的 HashMap，它的一个方法 count(key) 相当于 Java 的 containsKey(key) 可以判断键 key 是否存在  
可以使用方括号访问键对应的值 map[key]。需要注意的是，如果该 key 不存在，C++ 会自动创建这个 key，并把 map[key] 赋值为 0  

vector是数组，申明是vector<int>& num， 快慢指针可以直接用int fast/slow， resize设置总长  
矩阵 vector<vector<int>>& matrix   设定长度  vector<vector<int>>(m + 1, vector<int>(n + 1))； res.push_back(int)相当于list append 
字符串： char c = s[right];  s.size()  
打补丁： return nums[left] == target ? left : -1;
栈： std::stack<int> s;  s.pop() ;s.push()  
最值 int res = INT_MAX  
需要初始化大小，如果会变，那么选最大的可能数量  vector<int> top(nums.size());  
min要重写  
```
int min(int a, int b, int c) {
    return min(a, min(b, c));
}
```
动规dp vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1));
二维 vector<vector<int>> memo，没有初始化 

降序排列vector
```
sort(nums.begin(), nums.end(), greater<int>());
for (int i = 0, j = nums.size() - 1; i < j; i++, j--) {
    // 交换 nums[i] 和 nums[j]
    int temp = nums[i];
    nums[i] = nums[j];
    nums[j] = temp;
}
```
将bool的数组转为memo的哈希表，需要转为string：
```
// 将 used 的状态转化成形如 [true, false, ...] 的字符串
// 便于存入 HashMap
stringstream ss;
for (bool b : used) {
    ss << b;
}
string state = ss.str();
```
进一步，不用哈希表表示，而用位图:用整数 used 的第 i 位（(used >> i) & 1）的 1/0 来表示 used[i] 的 true/false
```
int used = 0; // 使用位图技巧，记录每个元素是否被选择
if ((used >> i) & 1 == 1) // 剪枝, 判断第 i 位是否是 1
used |= 1 << i; // 做选择, 将第 i 位置为 1
used ^= 1 << i; // 撤销选择, 使用异或运算将第 i 位恢复 0
```
自定义排序
```
sort(clips.begin(), clips.end(), [](const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0]) {
        return b[1] - a[1];
    }
    return a[0] - b[0];
});
```
取随机：
uniform_int_distribution<int> distribution(i, n - 1)

二叉树：
```
TreeNode* constructMaximumBinaryTree(vector<int>& nums) {} //签名
auto max_it = max_element(nums.begin(), nums.end()); // 找最大值
int max_idx = distance(nums.begin(), max_it); // 得到最大值的idex
TreeNode* root = new TreeNode(*max_it); //构造二叉树

```

动态数组
```
vector<int> left(nums.begin(), nums.begin() + max_idx); //构造vector
```
建立哈希映射
```
// 存储 inorder 中值到索引的映射
unordered_map<int, int> valToIndex;
for (int i = 0; i < inorder.size(); i++) {
    valToIndex[inorder[i]] = i;
}
```
deque记录结果
```
// 记录重复的子树根节点
deque<TreeNode*> res;  
res.emplace_back(root);
```
hashset是一维的，hashmap是二维的  

字符串拼接
```
#include <string>
stringstream ss;
void traverse(TreeNode* root, stringstream& ss) {}
  ss << NULL << SEP; //魔王
  ss << root->val <<",";


    // 将字符串转化成列表
    vector<string> nodes;
    stringstream ssin(data);
    string val;
    while (getline(ssin, val, ','))
        nodes.push_back(val);
    reverse(nodes.begin(), nodes.end());

    //for call
    vector<string>& nodes
```
一起的写法
nums[p] = temp[i++];

建类，建struct（类似类的属性）(归并排序)[https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-66994/gui-bing-p-1387f/]
```
class Solution {
public:
    struct Pair {
        int val, id;
        Pair(int val, int id) {
            // 记录数组的元素值
            this->val = val;
            // 记录元素在数组中的原始索引
            this->id = id;
        }
    };
    Pair* temp;
    Pair* arr = new Pair[n];
    // 记录元素原始的索引位置，以便在 count 数组中更新结果
    for (int i = 0; i < n; i++)
        arr[i] = Pair(nums[i], i);
}

```
预设vector长度
```
vector<int> temp(hi - lo + 1);
```
转换数据类型(不确定对不对)
```
(long long) nums[i] // nums 中的元素可能较大，乘 2 可能溢出，所以转化成 long long
```

直接修改函数名(二叉树小技巧：使用辅助函数，增加函数参数列表，在参数中携带额外信息)
```
bool isValidBST(TreeNode* root) {
    return isValidBST(root, nullptr, nullptr);
}

bool isValidBST(TreeNode* root, TreeNode* min, TreeNode* max) {}
```

二叉树搜索目标的简化写法
```
TreeNode* searchBST(TreeNode* root, int target) {
    if (root == nullptr) return nullptr;
    if (root->val == target) return root;
    // 当前节点没找到就递归地去左右子树寻找
    TreeNode* left = searchBST(root->left, target);
    TreeNode* right = searchBST(root->right, target);
    return left != nullptr ? left : right;  //能走到这里一定是有返回的，至于是left还是right得判断
}
```
插入
```
// 找到空位置插入新节点
if (root == nullptr) return new TreeNode(val);
```
洗牌算法
```
// 洗牌算法，将输入的数组随机打乱
static void shuffle(vector<int>& nums) {
    srand((unsigned) time(NULL));
    int n = nums.size();
    for (int i = 0 ; i < n; i++) {
        // 生成 [i, n - 1] 的随机数
        int r = i + rand()%(n-i);
        swap(nums[i], nums[r]);
    }
    }
```
数组交换
```
// 原地交换数组中的两个元素
static void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
```
二叉堆(Java 的 PriorityQueue 默认实现是小顶堆)
```
#include <queue>
#include <vector>
priority_queue<int, vector<int>, greater<int>> pq; // 小顶堆，堆顶是最小元素
    pq.push(e);
    pq.size();
    pq.pop();
    pq.top();
```
完善接口 [多叉树](https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-66994/ti-mu-bu-r-552fb/)
```

class NestedIterator {
private: // 自己额外写的
    vector<int> res;
    vector<int>::iterator it;

    // 遍历以 nestedList 为根的多叉树
    void traverse(vector<NestedInteger>& nestedList) {
        for (int i = 0; i < nestedList.size(); i++) {
            if (nestedList[i].isInteger()) {
                // 找到叶子节点
                res.push_back(nestedList[i].getInteger());
            } else {
                // 递归遍历子列表
                traverse(nestedList[i].getList());
            }
        }
    }

public:
    NestedIterator(vector<NestedInteger>& nestedList) {
        // 存放将 nestedList 打平的结果
        traverse(nestedList);
        // 得到 res 列表的迭代器
        it = res.begin();
    }

    int next() { //题给的，内容自己实现
        return *it++;
    }

    bool hasNext() { //题给的，内容自己实现
        return it != res.end();
    }
};

std::vector<NestedInteger> list;
list.erase(list.begin()); 

base case:
```
    // base case
    if (root == nullptr) {
        return nullptr;
    }
```
如果有找到，返回找到的，如果没有找到，返回无
```
class Solution {
public:
    // 用于记录 p 和 q 是否存在于二叉树中
    bool foundP = false, foundQ = false;
        TreeNode* res = find(root, p->val, q->val);
        if (!foundP || !foundQ) {
        // 后序位置，判断当前节点是不是目标值
        if (root->val == val1 || root->val == val2) {
            // 找到了，记录一下
            if (root->val == val1) foundP = true;
            if (root->val == val2) foundQ = true;
            return root;
        }
        }
}
```


# Java  
Integer 和 String 这种包装类不能直接用 == 进行相等判断，而应该使用类的 equals 方法  


# python 
random.Random.randint(0, n - i - 1)


# NOTES
- [**二叉堆**](https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-daeca/er-cha-dui-1a386/)  
    二叉堆是数组形式的完全二叉树，主要操作是上浮swim和下沉sink  
  - **优先级队列(PriorityQueue)**  
      是基于二叉堆实现的，父节点始终大于子节点。它的上浮比较简单，直接比较当前节点和父节点大小；下沉则要将当前值和子节点中最大值进行比较

- [**滑动窗口**](https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-48c1d/wo-xie-le--f7a92/)  
   left 指针在后，right 指针在前，两个指针中间的部分就是「窗口」，算法通过扩大和缩小「窗口」来解决某些问题。**主要考虑三个问题：**   
   - 什么时候应该扩大窗口？  
   - 什么时候应该缩小窗口？  
   - 什么时候应该更新答案？ 
  
   
- [**二叉树**](https://labuladong.github.io/algo/di-ling-zh-bfe1b/dong-ge-da-334dd/)  
    二叉树题目的递归解法可以分两类思路，第一类是**遍历**一遍二叉树得出答案，第二类是通过**分解**问题计算出答案，这两类思路分别对应着 **回溯算法核心框架** 和 **动态规划核心框架**。  
    **遍历和分解的区别**：两者都需要进行二叉树的遍历，但分解是把大问题拆分为小问题，每个小问题本身就可以返回答案；而遍历则没有这么直接，需要另外维护一个**外部变量**来得到最终答案。   
    每道题都要明白二叉树的每一个节点需要做什么，需要在什么时候（前中后序）做  
    - 前序位置的代码执行是自顶向下的，而后序位置的代码执行是自底向上；前序位置的代码只能从函数参数中获取父节点传递来的数据，而后序位置的代码不仅可以获取参数数据，还可以获取到子树通过函数返回值传递回来的数据    
    - 快速排序就是个二叉树的前序遍历，归并排序就是个二叉树的后序遍历 
    - 中序遍历是二叉树特有的，多叉树中不存在   
    - 一旦题目和子树有关，那大概率要给函数设置合理的定义和返回值，在后序位置写代码了 
    - 满二叉树是一种特殊的完全二叉树，每层都是是满的，像一个稳定的三角形   
    - 完全二叉树每一层都是紧凑靠左排列的; 完全二叉树对应英文 Complete Binary Tree，没有问题。但是我们说的满二叉树对应英文 Perfect Binary Tree，而英文中的 Full Binary Tree 是指一棵二叉树的所有节点要么没有孩子节点，要么有两个孩子节点  
    - 完全二叉树的时间复杂度是 O(logN*logN)     


- [**动态规划**](https://labuladong.github.io/algo/di-ling-zh-bfe1b/dong-tai-g-1e688/)      
    核心思想是穷举求最值，列出正确的「状态转移方程」，才能正确地穷举。重叠子问题、最优子结构、状态转移方程是动态规划三要素，需要判断算法问题是否具备「最优子结构」，是否能够通过子问题的最值得到原问题的最值。
    有的算法题，你只想到一个暴力求解思路，时间复杂度比较高。如果发现题目给定的数据量比较大，那么肯定可以说明这个求解思路有问题或者存在优化的空间  
    - *重叠子问题*：使用备忘录来剪枝，优化穷举过程，避免不必要的计算  
    - [*最长递增子序列*](https://labuladong.github.io/algo/di-er-zhan-a01c6/dong-tai-g-a223e/dong-tai-g-6ea57/)
    - *最优子结构*：标准的动态规划问题一定是求最值的，因为动态规划类型问题有一个性质叫做「最优子结构」，即从子问题的最优解推导出原问题的最优解，遇到恶心的求最值问题，想到用动态规划；  1、遍历的过程中，所需的状态必须是已经计算出来的。2、遍历结束后，存储结果的那个位置必须已经被计算出来。  两种视角，从盒子的角度或是从球的角度（少了循环，可能快一点）  
    我们处理排列组合问题时一般使用回溯算法去「遍历」回溯树，而不用「分解问题」的思路去处理  
    - [*空间压缩*](https://labuladong.github.io/algo/di-er-zhan-a01c6/dong-tai-g-a223e/dui-dong-t-8e7bf/) 空间压缩的核心思路就是，将二维数组「投影」到一维数组.    

- [**回溯算法**](https://labuladong.github.io/algo/di-ling-zh-bfe1b/hui-su-sua-c26da/)  
    和动态规划类似，但不直接返回结果，用额外的数组来维护返回值   
    - **回溯算法和 DFS 算法的区别所在：回溯算法关注的不是节点，而是树枝**  
    核心就是 for 循环里面的递归，在递归调用之前「做选择」，在递归调用之后「撤销选择」  
    回溯算法的一个特点，不像动态规划存在重叠子问题可以优化，回溯算法就是纯暴力穷举，复杂度一般都很高 
    选择视角：我们应该尽量「少量多次」，就是说宁可多做几次选择（乘法关系），也不要给太大的选择空间（指数关系）；做 n 次「k 选一」仅重复一次（O(k^n)），比 n 次「二选一」重复 k 次（O(k*2^n)）效率低很多   
    加入剪枝       
    '''
    def backtrack(路径, 选择列表):
    if 满足结束条件:
        result.add(路径)
        return
    
    for 选择 in 选择列表:
        做选择
        backtrack(路径, 选择列表)
        撤销选择


- [**BFS**](https://labuladong.github.io/algo/di-ling-zh-bfe1b/bfs-suan-f-463fd/)  
    传统的 BFS 框架就是从起点开始向四周扩散，遇到终点时停止；而双向 BFS 则是从起点和终点同时开始扩散，当两边有交集的时候停止。但双向BFS必须知道终点在哪里   
    不再使用队列，而是使用 HashSet 方便快速判断两个集合(从头开始，从终点开始)是否有交集。另外的一个技巧点就是 while 循环的最后交换 q1 和 q2 的内容，所以只要默认扩散 q1 就相当于轮流扩散 q1 和 q2  
    最后一个技巧：按照 BFS 的逻辑，队列（集合）中的元素越多，扩散之后新的队列（集合）中的元素就越多；在双向 BFS 算法中，如果每次都选择一个较小的集合进行扩散，那么占用的空间增长速度就会慢一些，效率就会高一些  
    

- [**图**](https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-03a72/tu-lun-ji--d55b2/)  
    如果图包含环，遍历框架就要一个 visited 数组进行辅助, visited 数组就是防止递归重复遍历同一个节点进入死循环的  
    类比贪吃蛇游戏，visited 记录蛇经过过的格子，而 onPath 仅仅记录蛇身。在图的遍历过程中，onPath 用于判断是否成环, 处理路径相关的问题，如 拓扑排序, onPath 变量是有必要的.  
    图中并不是所有节点都相连，所以要用一个 for 循环将所有节点都作为起点调用一次 DFS 搜索算法  
    - **拓扑排序** 拓扑排序的结果就是反转之后的后序遍历结果  
    - [**BFS版本环检测**](https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-03a72/huan-jian--e36de/) 基于队列：借助 indegree 数组记录每个节点的「入度」，节点 i 没有入度，即没有依赖的节点，可以作为拓扑排序的起点，加入队列，如果入度变为 0，说明 next_node 依赖的节点都已被遍历，加入队列；如果最后遍历的节点数小于总数，则存在环；这里不需要用visited记录已经走过的路，因为indegree只让入度为0的进入，该数组可以防止走回头路  
    - **二分图** 应用：双向索引，如数据库；因为图不一定是联通的，可能存在多个子图，所以要把每个节点都作为起点进行一次遍历
    - **并查集** 在合并数的过程中，需要记录每个树的大小，保持树的高度在logN数量级; 考虑增加虚拟节点dummy   
    将二维坐标映射到一维的常用技巧:二维坐标 (x,y) 可以转换成 x * n + y  
    - **Kruskal 最小生成树算法** 权重和最小的那棵生成树就叫「最小生成树」  
    - **dijkstra** 加权图中起点 start 到所有其他节点的最短路径，理解成一个带 dp table（或者说备忘录）的 BFS 算法；用到优先级队列，利用贪心算法的思路优化算法效率；Dijkstra 计算最短路径的正确性依赖一个前提：路径中每增加一条边，路径的总权重就会增加，结论反过来也成立；  

- [**栈**](https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-daeca/dan-diao-z-1bebe/)
    先进后出  
    - [**单调栈**](496.下一个更大元素-i.py) 栈内元素保持有序（单调递增或递减） 
    - [**循环数组**] 通过 % 运算符求模（余数），来模拟环形特效，对于最后一个元素，常用用套路就是将数组长度翻倍  


- [**队列**](https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-daeca/dan-diao-d-32cd5/) 
    - [**优先级队列**] 优先级队列无法满足标准队列结构「先进先出」的时间顺序，因为优先级队列底层利用二叉堆对元素进行动态排序，元素的出队顺序是元素的大小顺序，和入队的先后顺序完全没有关系
    - [**单调队列**] 主要辅助滑动窗口的问题, 把前面比当前节点小的元素都pop掉，保持队列有序


- [**LRU(Least Recently Used)**](https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-daeca/suan-fa-ji-8674e/)  
    LRU 算法就是一种缓存淘汰策略，用哈希链表结构    
    - 使用双向链表：用自定义的class Double link实现。使用理由：删除一个节点的时候，要能直接查找到该节点的前驱节点，保证操作的时间复杂性为O(1); 尾部的数据是最常用的，头部的数据是最不常用的  
  

- [**二叉堆**](https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-daeca/er-cha-dui-1a386/)  
    二叉堆就是一种完全二叉树，所以适合存储在数组中，而且二叉堆拥有一些特殊性质。
    swim 和 sink 是主要的操作，来维护堆的性质（堆有序）
    优先级队列是基于二叉堆实现的，主要操作是插入和删除。插入是先插到最后，然后上浮到正确位置；删除是调换位置后再删除，然后下沉到正确位置   
    二叉堆插入和删除的时间复杂度和堆中的元素个数有关，在这里我们堆的大小不会超过 k，所以插入和删除元素的复杂度是 O(logk)  


- [**队列实现栈/栈实现队列**](https://labuladong.github.io/algo/di-yi-zhan-da78c/shou-ba-sh-daeca/dui-lie-sh-88541/)  
    - [**队列实现栈**] 两个栈倒来倒去相互配合，得到需要的栈头或栈尾  
    - [**栈实现队列**] 把队列前面的都取出来再加入队尾，让之前的队尾元素排到队头  

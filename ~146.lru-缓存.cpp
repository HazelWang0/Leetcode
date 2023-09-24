/*
 * @lc app=leetcode.cn id=146 lang=cpp
 *
 * [146] LRU 缓存
 */
#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <deque>

using namespace std;
// @lc code=start
class LRUCache {
    // 哈希链表,  插入删除会快很多; 哈希存储查询次数,确定每次修改的索引值;
    // put哈希指向node的idx; get后node指向哈希修改次数
private:
    struct Node {
        int key, value; // key 是哈希idx
        Node* next;
        Node(int _key, int _val): key(_key), value(_val) {} // 赋值函数
    };

    unordered_map<int, Node*> map;
    Node* head;
    Node* tail;
    int capacity;

    void popHead() {
        // if none?
        Node* node = head;
        head->next = head->next->next;
        map.erase(node->key); // 哈希表中删除
        delete node;
    }

    void addTail(Node* node) {
        // 加入尾部
        node->next = nullptr;
        tail->next = node;
        tail = node; // 把此时的node标记为tail
    }
    
public:
    LRUCache(int capacity) {
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->next = nullptr; 
    }
    
    int get(int key) {
        // 移动到头部
        if (map.count(key)) {
            Node* node = map[key];

            // 删除节点
            Node* cur_node = map[key];
            Node* pre = head;
            while(pre->next!=node) {pre = pre->next;} // 获取到前一个node
            pre->next = node->next;
            
            addTail(node);

            return node->value;
            
        }
        else return -1;
        
    }
    
    void put(int key, int value) {
        if (map.size() <capacity) {
            Node* node = new Node(key, value); // 首次加入key为
            map[key] = node; // 首次加入
            addTail(node);
        }
        else {
            // pop head
            popHead();
        }

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end


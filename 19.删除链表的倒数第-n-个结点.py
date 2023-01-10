#
# @lc app=leetcode.cn id=19 lang=python3
#
# [19] 删除链表的倒数第 N 个结点
#

# @lc code=start
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        p1 = head
        dummy = ListNode(0, head)  
        p2 = dummy # 需要p2的前驱节点，所以p2开始指向为dummy哑节点，而不是直接指向head节点； 如果慢指针比快指针多慢，就需要再构造一个dummy头增加位置
        for i in range(n):
            p1 = p1.next
        while p1:
            p1 = p1.next
            p2 = p2.next
        p2.next = p2.next.next
        return dummy.next
        
            
# @lc code=end


#
# @lc app=leetcode.cn id=876 lang=python3
#
# [876] 链表的中间结点
#

from typing import Optional
# @lc code=start
# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        fast = head
        slow = head
        while(fast and fast.next):
            fast = fast.next.next
            slow = slow.next
        return slow
# @lc code=end


# if __name__ == '__main__':
#     Sol = Solution()
#     ListNode test = [1,2,3,4,5,6]
#     print(Sol.middleNode(head = test))

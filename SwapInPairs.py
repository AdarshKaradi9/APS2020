
class Solution(object):
    def swapPairs(self, head):
        if head is None:
            return head
        
        ref = head
        
        while ref is not None and ref.next is not None:
            ref.val, ref.next.val = ref.next.val, ref.val
            ref = ref.next.next
            
        return head
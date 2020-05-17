class Solution(object):
    def removeNthFromEnd(self, head, n):
        if not head:
        	return None

        ref = head
        while n > 0:
        	ref = ref.next
        	n -= 1

        if ref is None:
        	return head.next
        else:
        	main = head
        	while ref.next:
        		main = main.next
        		ref = ref.next

        	main.next = main.next.next
        	return head

class Solution(object):
    def mergeKLists(self, lists):

        from heapq import heappush, heappop

        heap = []
        head = point = ListNode(0)
        for element in lists:
        	if element:
        		heapq.heappush(heap, (element.val, element))

        while heap:
        	value, node = heapq.heappop(heap)
        	head.next = ListNode(value)
        	head = head.next
        	node = node.next
        	if node:
        		heapq.heappush(heap, (node.val, node))

        return point.next
		
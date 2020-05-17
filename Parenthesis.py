
class Solution(object):
    def generateParenthesis(self, n):

        result = []

        def backtracking(S, left, right):
        	if len(S) == 2*n:
        		result.append(S)
        		return 

        	if left < n:
        		backtracking(S+'(', left+1, right)

        	if right < left:
        		backtracking(S+')', left, right+1)

        backtracking('', 0, 0)
        return result
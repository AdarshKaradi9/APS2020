class Solution(object):
    def spiralOrder(self, matrix):
      
        if not matrix:
        	return []

        R, C = len(matrix), len(matrix[0])
        dr = [0, 1, 0, -1]
        dc = [1, 0, -1, 0]

        result = []
        seen = [[False]*C for _ in range(R)]
        row = 0
        col = 0
        di = 0
        for _ in range(R*C):
        	result.append(matrix[row][col])
        	seen[row][col] = True
        	rr, cc = row + dr[di], col + dc[di]
        	if 0 <= rr < R and 0 <= cc < C and not seen[rr][cc]:
        		row, col = rr, cc
        	else:
        		di = (di+1)%4
        		row, col = row + dr[di], col + dc[di]

        return result
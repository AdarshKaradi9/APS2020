
class Solution(object):
    def searchRange(self, nums, target):
        left, right = 0, len(nums)-1

        while left <= right:
        	mid = (left + right) /  2
        	if target > nums[mid]:
        		left = mid + 1
        	else:
        		right = mid

        if left == len(nums) or nums[left] != target:
        	return [-1, -1]

        result = [left]
        left, right = 0, len(nums) -1
        while left <= right:
        	mid = (left + right) / 2
        	if nums[mid] > target:
        		right = mid
        	else:
        		left = mid + 1

        result.append(left + 1)
        return result
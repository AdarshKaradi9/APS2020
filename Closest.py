class Solution(object):
    def threeSumClosest(self, nums, target):
        nums.sort()
        result, min_diff = 0, float('inf')

        for index in range(len(nums)-1):
        	left = index + 1
        	right = len(nums) - 1

        	while left < right:
        		currSum = nums[index] + nums[left] + nums[right]
        		diff = abs(target - currSum)

        		if diff == 0:
        			return target
        		if diff < min_diff:
        			min_diff = diff
        			result = currSum

        		if currSum < target:
        			left += 1
        		else:
        			right -= 1
        return result
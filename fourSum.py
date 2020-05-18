
class Solution(object):
    def fourSum(self, nums, target):
        sumMapping = {}
        for index_i in range(len(nums)-1):
        	for index_j in range(index_i+1, len(nums)):
        		currSum = nums[index_i] + nums[index_j]
        		if currSum in sumMapping:
        			sumMapping[currSum].append((index_i, index_j))
        		else:
        			sumMapping[currSum] = [(index_i, index_j)]

        result = set()
        for key, value in sumMapping.iteritems():
        	diff = target - key
        	if diff in sumMapping:
        		firstSet = value
        		secondSet = sumMapping[diff]

        		for (i, j) in firstSet:
        			for (k, l) in secondSet:
        				fourlet = [i, j, k, l]
        				if len(set(fourlet)) != len(fourlet):
        					continue
        				fourlist = [nums[i], nums[j], nums[k], nums[l]]
        				fourlist.sort()
        				result.add(tuple(fourlist))

        return list(result)
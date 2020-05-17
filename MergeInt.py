class Solution(object):
    def merge(self, intervals):  
        intervals = sorted(intervals, key= compare)
        merged = []
        for interval in intervals:
        	if not merged or merged[-1].end < interval.start:
        		merged.append(interval)
        	else:
        		merged[-1].end = max(merged[-1].end, interval.end)
        return merged
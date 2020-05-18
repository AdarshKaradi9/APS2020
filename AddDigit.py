class Solution(object):
    def addDigits(self, num):
        if num < 10:
            return num
        return num - ((num - 1) / 9) * 9
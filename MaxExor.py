import math
import os
import random
import re
import sys

def maximizingXor(l, r):
    return max(list(a ^ b for a in range(l,r+1) for b in range(l,r+1)))

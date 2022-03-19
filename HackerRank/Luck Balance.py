#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'luckBalance' function below.
#
#https://www.hackerrank.com/challenges/luck-balance/
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER k
#  2. 2D_INTEGER_ARRAY contests
#

def luckBalance(k, contests):
    #summing the non important contests
    res=sum([i[0] for i in contests if i[1] == 0])
    #sorting and copying the important contests
    impCont = sorted([i[0] for i in contests if i[1] == 1], reverse=True)
    if len(impCont) < k: return res+sum(impCont)
    else: return res+sum(impCont[0:k])-sum(impCont[k:len(impCont)])
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    k = int(first_multiple_input[1])

    contests = []

    for _ in range(n):
        contests.append(list(map(int, input().rstrip().split())))

    result = luckBalance(k, contests)

    fptr.write(str(result) + '\n')

    fptr.close()

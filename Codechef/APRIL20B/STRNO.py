# Strange Number

import math as mt
from collections import Counter

MAXN = 32000

spf = [0 for i in range(MAXN)]


def sieve():
    spf[1] = 1
    for i in range(2, MAXN):
        spf[i] = i
    for i in range(4, MAXN, 2):
        spf[i] = 2
    for i in range(3, mt.ceil(mt.sqrt(MAXN))):
        if (spf[i] == i):
            for j in range(i * i, MAXN, i):
                if (spf[j] == j):
                    spf[j] = i


def strno(x, k):
    cnt = 0
    while(x % 2 == 0):
        x = x // 2
        cnt += 1
    j = 3
    for j in range(3, len(spf)):
        if(x % j == 0):
            x = x // j
            cnt += 1
    if(x > 2):
        cnt += 1

    if(cnt >= k):
        return 1
    return 0


for t in range(int(input())):
    x, k = map(int, input().split())
    print(strno(x, k))

# Sell All the Cars

from sys import stdin, stdout
for _ in range(int(stdin.readline())):
    n = int(stdin.readline())
    prices = list(map(int, stdin.readline().split()))
    prices.sort(reverse=True)
    profit = 0
    for i in range(n):
        val = prices[i] - i
        if(val > 0):
            profit += val % 1000000007
    stdout.write(str(profit % 1000000007) + '\n')

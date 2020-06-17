# Chef and Icecream

# cook your dish here
t = int(input())

for _ in range(t):
    possible = 0
    n = int(input())
    arr = list(map(int, input().split()))
    coins = {5: 0, 10: 0, 15: 0}
    for i in range(n):
        if(arr[i] == 5):
            coins[5] += 1
            possible = 1
        elif(arr[i] == 10):
            if(coins[5] > 0):
                coins[5] -= 1
                coins[10] += 1
                possible = 1
            else:
                possible = 0
                break
        elif(arr[i] == 15):
            if(coins[10] > 0):
                coins[15] += 1
                coins[10] -= 1
                possible = 1
            elif(coins[5] >= 2):
                coins[15] += 1
                coins[5] -= 2
                possible = 1
            else:
                possible = 0
                break
    if(possible):
        print('YES')
    else:
        print('NO')

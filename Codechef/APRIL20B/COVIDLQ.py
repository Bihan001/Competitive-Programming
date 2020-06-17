# COVID Pandemic and Long Queue

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    chk = True
    for i in range(n - 1):
        if (arr[i] == 0):
            continue
        for j in range(i + 1, n):
            if (arr[i] == 1 and arr[j] == 1):
                if (abs(i - j) < 6):
                    chk = False
                    break
    if (chk == False):
        print('NO')
    else:
        print('YES')

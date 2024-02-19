def sum():
    return list(map(int, input().strip().split()))

maxn = 200010
s = [0]*(maxn)


def dp(n):
    res = 0
    for i in str(n):
        res += int(i)
    return res

for i in range(maxn-1):
    s[i+1] = dp(i+1) + s[i]


for _ in range(sum()[0]):
    m = []  
    n = sum()[0]

    print(s[n])
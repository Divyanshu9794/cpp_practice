
def findsquare():
    return list(map(int, input().strip().split()))
for _ in range(findsquare()[0]):
    M = []  
    n = findsquare()[0]

    st = set()
    for i in range(n):
        s = input()
        if '1' in s:
            st.add(s.count('1'))


    if len(st) == 1:
        print("SQUARE")
    else:
        print("TRIANGLE")
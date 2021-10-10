t = int(input())
for i in range(t):
    x = int(input())
    f = 1
    for j in range(1, x+1):
        f *= j
    print(f)
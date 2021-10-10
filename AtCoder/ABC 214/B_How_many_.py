s, t = map(int, input().split())
ans = 0
for i in range(101):
    for j in range(101):
        for k in range(101):
            add = i+j+k
            mul = i*j*k
            if add<=s and mul<=t:
                ans += 1
print(ans)
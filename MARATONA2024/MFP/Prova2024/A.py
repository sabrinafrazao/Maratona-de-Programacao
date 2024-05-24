n, p = map(int, input().split())


for i in range(n+1):
    a = list(int(input()))

    if n%2==0:
        r = sum(a)//2
        print(r)

    else:
        r = max(a)
        print(r)



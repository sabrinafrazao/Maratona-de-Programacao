n = int(input())

p = (2**n) - 1
t = (2**(n-1))

for i in range(p):
    k = list(map(int, input().split()))


maior = max(k)
menor = min(k!=0)

print(maior+menor)
        
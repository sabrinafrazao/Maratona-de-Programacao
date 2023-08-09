
M, N = map(int, input().split())

estoque = []
for i in range(M):
    linha = list(map(int, input().split()))
    estoque.append(linha)

P = int(input())

vendas = 0

for i in range(P):
    I, J = map(int, input().split())

    if estoque[I-1][J-1] > 0:
        estoque[I-1][J-1] -= 1
        vendas += 1

print(vendas)

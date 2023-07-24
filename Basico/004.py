
n = int(input("informe a posição que queira saber na sequencia de fibonnaci :"))
ant = 0
atual = 1
for i in range(2, n):
    prox = ant + atual
    ant = atual
    atual = prox
if (n == 1):
    print(ant)
elif (n == 2):
    print(atual)
else:
    print(prox)

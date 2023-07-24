""" Entrar com 20 números e imprimir a soma dos números cujos quadrados
são menores do que 225"""

soma = 0
for i in range(5):
    n = int(input("Informe um número: "))
    
    if (n * n < 225):
        soma += n

print(soma) 
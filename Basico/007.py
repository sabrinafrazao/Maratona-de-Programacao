"""Entrar com vários números e imprimir a média dos números digitados"""

contador = 0
soma = 0

n = int(input('Informe a quantidade de numeros que quer tirar a média: '))

for i in range(n):
    numero = float(input("Digite um número: "))
    contador += 1
    soma += numero

if (contador > 0):
    media = soma / contador
    print(f"A média dos numeros fornecidos é : {media}")
else:
    print("Nenhum número foi digitado.")

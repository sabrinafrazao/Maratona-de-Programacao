"""Criar um algoritmo que leia dois números inteiros e escrever o quadrado do menor número e a raiz 
quadrada do maior número. Se os números forem iguais, escreva a seguinte mensagem “São iguais”."""

n1 = int(input("Informe um número: "))
n2 = int(input("Informe mais um número: "))


if(n1 == n2):
    print("São iguais")

else:
    menor = min(n1,n2)
    maior = max(n1, n2)
    
    print(f"O quadrado do menor número fornecido: {menor ** 2}")
    print(f"A raiz quadrada do maior número: {maior ** 0.5}")
    




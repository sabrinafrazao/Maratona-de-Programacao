"""Criar um algoritmo que imprima os 10 primeiros termos da série de
Fibonacci.
Observação: os dois primeiros termos desta série são 1 e 1 e os demais são
gerados a partir da soma dos dois termos anteriores."""


ant, atual = 1, 1

print(ant)
print(atual)

for i in range(8):
    proximo = ant + atual
    print(proximo)
    ant = atual
    atual = proximo 

"""
a, b = 1, 1

for i in range(10):
    print(a)
    a, b = b, a + b  
    
    #O valor de a é atualizado para o valor atual de b, 
    #e o valor de b é atualizado para a soma dos valores anteriores de a e b
"""
   
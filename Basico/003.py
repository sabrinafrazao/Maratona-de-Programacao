"""Criar um algoritmo que imprima os 10 primeiros termos da série de
Fibonacci.
Observação: os dois primeiros termos desta série são 1 e 1 e os demais são
gerados a partir da soma dos dois termos anteriores."""

ant = 1
atual = ant

print(f"{ant}\n")
print(f"{atual} \n")

for i in range(10):
    proximo = ant + atual
    print(proximo)
    
    

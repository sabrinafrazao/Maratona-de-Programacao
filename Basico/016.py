"""Elabore um algoritmo que leia o valor de dois números inteiros e o operador aritmético desejado. Calcule, a 
resposta adequada (resolver com Se s Aninhados e também com Múltipla escolha). Utilize as opções 
abaixo:
1 – Adição; 2 – Subtração; 3 – Multiplicação; 4 – Divisão; """

n1 = int(input("Informe um número: "))
n2 = int(input("Informe um número: "))

escolha = int(input("Digite 1 para adição, 2 para subtração, 3 para multiplicação e 4 para divisão: "))

if escolha == 1:
     res=  n1 + n2
elif escolha == 2 :
    res = n1 - n2
elif escolha == 3:
    res = n1 * n2 
elif escolha == 4:
   res=  n1/n2

print(res)
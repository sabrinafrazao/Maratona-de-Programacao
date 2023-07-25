""". Criar um algoritmo que leia o salário de uma pessoa e imprimir o desconto do INSS segundo os dados 
abaixo:
Valor do salário Desconto
Menor ou igual a R$ 600,00 Isento
Maior que R$ 600,00 e menor ou igual a R$ 1200,00 20%
Maior que R$ 1200,00 e menor ou igual a R$ 2000,00 25%
Maior que R$ 2000,00 30%
"""

salario = float(input("Informe o seu sálario: "))

if salario <= 600:
    print("INSS Isento")
elif 600 < salario <= 1200:
    print("Desconto de 20% no INSS")
elif 1200 < salario <= 2000:
    print('Desconto de 25% no INSS')
elif salario > 2000:
    print("Desconto de INSS 30%")
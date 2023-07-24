"""Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor da compra for 
menor que R$ 20,00; caso contrário, o lucro será de 30%. Faça um algoritmo que leia o valor do produto e 
imprima o valor da venda."""

produto = float(input("Informe o preço do produto: "))

if ( produto < 20.0):
    venda = produto + (produto * 0.45)
else:
    venda = produto + (produto * 0.3)

print(f"O valor do produto será: {venda:.2f}")
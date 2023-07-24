""". Criar um algoritmo que leia quatro valores inteiros e imprimir o maior número (assuma que os números são 
sempre diferentes um dos outros)."""

numeros = []
for i in range(4):
    n =int(input("Informe um número: "))
    numeros.append(n)

maior = max(numeros)

print(f"O maior número informado é {maior} ")
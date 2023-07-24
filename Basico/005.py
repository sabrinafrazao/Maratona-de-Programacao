"""A série de RICCI difere da série de FIBONACCI porque os dois primeiros
termos são fornecidos pelo usuário. Os demais termos são gerados da 
mesma forma que a série de FIBONACCI. Criar um algoritmo que imprima os 
n primeiros termos da série da série de RICCI, sabendo-se que para existir 
esta série serão necessários pelo menos três termos"""

n = int(input("Quantos termos da série de Ricci você deseja gerar? "))
primeiro = int(input("Informe o primeiro termo de RICCI: "))
segundo = int(input("Informe o segundo termo de RICCI: "))


print(primeiro)
print(segundo)

for i in range(n - 2):
    proximo = primeiro + segundo
    print(proximo)
    primeiro, segundo = segundo, proximo 
    

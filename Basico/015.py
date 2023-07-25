"""Criar um algoritmo que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem 
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão tirar 
para serem aprovados, considerando que a média exigida é 6.0.
MÉDIA ARITMÉTICA MENSAGEM
>= 0.0 < 5.0 Aluno Reprovado
>= 5.0 < 7.0 Aluno vai para Exame Final
>= 7.0 <= 10.0 Aluno Aprovado"""

soma = 0
cont = 0

for i in range(3):
    nota = float(input("Informe a sua nota : "))
    cont += 1
    soma += nota

media = soma/cont

if 0.0 <= nota < 5.0 :
    print(f"{media:.2f}")
    print("Aluno Reprovado")
elif 5.0 <= nota < 7.0 :
    print(f"{media:.2f}")
    print("Aluno vai para Exame Final")

    nota_exame = 12 - media
    print(f"Para ser aprovado você necessita de {nota_exame:.2f} pontos")
else:
    print("Aluno Aprovado")
"""A prefeitura do Rio de Janeiro abriu uma linha de crédito para os 
funcionários estatutários. O valor máximo da prestação não poderá ultrapassar 
30% do salário bruto. Fazer um algoritmo que permita entrar com salário bruto 
e o valor da prestação e informar se o empréstimo pode ou não ser concedido"""

salario_bruto = float(input("Digite o salário bruto: "))

prestacao = float(input("Digite o valor da prestação: "))


emprestimo = (30/100)*salario_bruto

if (prestacao <= emprestimo):
    print('Emprestimo Aprovado')
else:
    print('Emprestimo não Aprovado')

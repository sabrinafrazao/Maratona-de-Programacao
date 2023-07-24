"""Criar um algoritmo para ler a sigla de um estado de uma pessoa e imprimir uma das mensagens: 
- Carioca; - Paulista; - Amazonense; - Pernambucano; - Baiano; - Outros estados."""

estado = input("Informe a sigla de um estado: ")

if (estado == 'SP'):
    print("Paulista")
elif (estado == 'RJ'):
    print("Carioca")
elif (estado == 'AM'):
    print("Amazonese")
elif (estado == 'PE'):
    print("Pernambucano")
elif (estado == 'BA'):
    print("Baiano")
else:
    print("Outros estados")

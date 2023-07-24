"""Escreva um algoritmo que leia do usuário um número inteiro e informe a qual intervalo o número pertence: 
entre 1 e 25, outro de 26 a 50, outro de 51 a 75 e um último de 76 a 100. Caso o número não esteja em 
nenhum dos intervalos, apresente a seguinte mensagem “Fora do intervalo”."""

n = int(input("Digite um número : "))

if (1 <= n <= 25):
    print("Pertence ao intervalo entre 1 e 25")
else:
    if(26 <= n <= 50):
        print("Pertence ao intervalo entre 26 e 50")
    else:
        if(51 <= n <= 75):
            print("Pertence ao intervalo entre 51 e 75")
        else:
            if(76 <= n <= 100):
                print("Pertence ao intervalo entre 76 e 100")
            else:
                print("Fora do intervalo")
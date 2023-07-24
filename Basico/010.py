"""Faça um algoritmo que leia os valores de A, B e C e faça a seguinte operação de acordo com os valores de 
cada um deles (não se esqueça de imprimir o resultado).
• Se A for o maior: mostre o valor de B + C;
• Se B for o maior: mostre o valor de A * C;
• Se C for o maior: mostre o valor de A – B"""

A = float(input("Informe um número: "))
B = float(input("Informe um número: "))
C = float(input("Informe um número: "))

if(A > B and A > C ):
    print(A + B)
else:
    if(B > A and B > C ):
        print(A * C)
    else:
        print(A - B)

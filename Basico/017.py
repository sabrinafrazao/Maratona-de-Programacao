"""Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo. Se 
sim, verificar se é um triângulo equilátero, isósceles ou escaleno. Se não formarem um triângulo, escrever a 
mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais;
• Escaleno: tem os comprimentos dos três lados diferentes"""

x = float(input(("Informe o comprimento do lado 1 do triangulo : ")))
y = float(input(("Informe o comprimento do lado 2 do triangulo : ")))
z = float(input(("Informe o comprimento do lado 3 do triangulo : ")))

if (x < y + z) and (y < x + z) and (z < x + y) :
    if x == y and y == z :
        print("equilatero")
    elif x == y or x == z or z == y :
        print("Isósceles")
    elif  x != y and x != z and z != y :
        print(" Escaleno:")
else:
    print("Não é triangulo")
    
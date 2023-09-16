N, M = map(int, input().split())
acesas_inicialmente = set(map(int, input().split()))
interruptores = []

for _ in range(N):
    interruptor = set(map(int, input().split()[1:]))
    interruptores.append(interruptor)

contagem = 0
lampadas_apagadas = set()

while True:
    mudou = False
    for i, interruptor in enumerate(interruptores):
        if interruptor & acesas_inicialmente:  # Verifica se o interruptor pode apagar alguma lâmpada acesa
            acesas_inicialmente -= interruptor  # Apaga as lâmpadas que o interruptor pode apagar
            contagem += 1
            mudou = True

    if not mudou:
        break  # Se nenhum interruptor puder apagar lâmpadas acesas, saímos do loop

if not acesas_inicialmente:
    print(contagem)
else:
    print(-1)

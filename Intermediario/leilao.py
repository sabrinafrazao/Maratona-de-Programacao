
N=int(input())

lista = []
for i in range(N):
	C = str(input())
	V = int(input())
	lista.append((C, V))

def get_number(s):
	for i in s:
		if isinstance(i, int):
			return i

maior = max(lista, key=get_number)

for i in maior:
	print(i)
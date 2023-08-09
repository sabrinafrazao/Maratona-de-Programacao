A, B = map(int, input().split())
X = list(map(int, input().split()))
Y = list(map(int, input().split()))

tam_sub = 0

for i in range(A):
	if X[i] == Y[tam_sub]:
		tam_sub += 1
	if tam_sub == B:
		break

if tam_sub == B:
	print('S')
else:
	print('N')
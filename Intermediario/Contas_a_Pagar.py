

V = int(input())
A = int(input())
F = int(input())
P = int(input())

total = A + F + P

if V >= total:
	print('3')
elif V >= total - A:
	print('2')
elif V >= total - F :
	print('2')
elif V >= total - P :
	print('2')
elif V >= total - (A+F):
	print('1')
elif V >= total - (A+P):
	print('1')
elif V >= total - (P+F):
	print('1')
elif V <= total - V :
	print('0')


T = input()
s = input()

v = [[] for _ in range(26)]
vis = [0] * 10010

i =0

for c in  T:
	v[ord(c) - ord('A')].append(i)
	i +=1

for k in range(len(s)):
	for pos in v[ord(s[k]) - ord('A')]:
		shift = pos - k

		if shift < 0:
			continue
		if shift > len(T) - len(s):
			break

		vis[shift]= 1

cnt =0
for i in range(len(T) - len(s) + 1):
	if vis[i] == 0:
		cnt += 1

print(cnt)
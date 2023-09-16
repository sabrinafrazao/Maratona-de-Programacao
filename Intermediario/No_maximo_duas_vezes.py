str = input()

cont = [0] * 10

j = 0
m = '9'
pode = 0
for i in range(len(str)):
    cont[int(str[i])] += 1
    if cont[int(str[i])] > 2:
        while True:
            cont[int(str[i])] -= 1
            str = list(str)
            str[i] = chr(ord(str[i]) - 1)
            str = ''.join(str)

            if str[i] < '0':
                str = list(str)
                str[i] = '9'
                str = ''.join(str)
                j = i
                while True:
                    cont[int(str[j - 1])] -= 1
                    str = list(str)
                    str[j - 1] = chr(ord(str[j - 1]) - 1)
                    str = ''.join(str)

                    if str[j - 1] < '0':
                        str = list(str)
                        str[j - 1] = '9'
                        str = ''.join(str)
                        j -= 1
                    else:
                        i = j - 1
                        break

            cont[int(str[i])] += 1
            if cont[int(str[i])] <= 2:
                break

        for k in range(i + 1, len(str)):
            str = list(str)
            str[k] = '9'
            str = ''.join(str)

res = 0
for i in range(len(str)):
    res = 10 * res + int(str[i])

print(res)

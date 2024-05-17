x,y = map(int, input().split())
x2,y2 = map(int, input().split())
x3,y3 = map(int, input().split())
x4,y4 = map(int, input().split())
    
nx = [x, x2, x3, x4]

maiorx= max(nx)
menorx= min(nx)

ny = [y, y2, y3, y4]

maiory= max(ny)
menory= min(ny)

A =( (maiorx - menorx) * (maiory - menory))

print(A)
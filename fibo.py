x = 0
y = 1
z = x + y

n = 200

for i in range(n):
    x = y
    y = z
    z = x + y

    print(z)


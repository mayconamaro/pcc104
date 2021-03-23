import random

n = 1000

v = [i for i in range(1, n+1)]
random.shuffle(v)

print(n)
for i in v:
    print(i)

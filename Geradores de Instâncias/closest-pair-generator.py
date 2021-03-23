import random

n = 100

random.seed()

print(n)

for i in range (0, n):
    print(str(random.randint(1, 200)), str(random.randint(1, 200)))

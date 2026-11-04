import sys

tname = "capso"
sys.stdin = open(f"{tname}.inp", "r")
sys.stdout = open(f"{tname}.out", "w")

n,m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

da = [0] * 1000005
db = [0] * 1000005

for i in a:
    da[i] += 1
for j in b:
    db[j] += 1

res = 0
for i in range(1000001):
    res += da[i] * db[i]

print(res)
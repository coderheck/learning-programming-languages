pr=[True]*10000005
pn=[0]*10000005
pr[0]=pr[1]=False
for i in range(2,10000000):
  if pr[i]==True:
    for j in range(i*i,10000000,i):
      pr[j]=False
for i in range(2,10000000):
  pn[i]=pn[i-1]+pr[i]
n=int(input())
print(pr[n])
print(pn[n])
import math
line=open("cau1.inp","r").readline()
a=int(list(line.split())[0])
b=int(list(line.split())[1])
res=0
gc=int(math.gcd(a,b))
for i in range(1,int(math.sqrt(gc))+1):
    if gc%i==0:
        res+=1
        if i!=gc//i:
            res+=1
open("cau1.out","w").write(str(res))

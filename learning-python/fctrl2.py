import os
t=int(input())
while(t!=0):
  n=int(input())
  res=1
  while(n>0):
    res=res*n
    n-=1
  print(res)
  t-=1
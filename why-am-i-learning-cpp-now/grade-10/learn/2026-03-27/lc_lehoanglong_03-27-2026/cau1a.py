def rev(x):
    r=0
    while(x>0):
        r=r*10+x%10
        x//=10
    return r

ii=list(input().split())
a=int(ii[0]);b=int(ii[1])
print(max(rev(a),rev(b)))
#include<stdio.h>
#define tname "bai1"
int main()
{
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname"_rac.out","w",stdout);
	}
    bool A[1000005];
    long n,a;
    long max=0;
    scanf("%ld",&n);
    for(long i=1;i<=1000000;i++) A[i]=false;
    for(long i=0;i<n;i++)
    {
        scanf("%ld",&a); A[a]=true;
    }
    for(long i=1000000;i>max;i--)
    if(A[i])
    {
        for(long j=i-max-1;j>max;j--)
        if(A[j])
        {
            if(i%j>max) max=i%j;
        }
    }
    printf("%ld",max);
}

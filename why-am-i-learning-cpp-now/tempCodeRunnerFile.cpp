#include"cstdio"
void sieve(bool a[],int n){
  for (int i=0;i<=n;i++){a[i]=true;}
  a[0]=a[1]=false;
  for (int i=2;i*i<=n;i++){
    if (a[i]){
      for (int j=i*i;j<=n;j+=i){a[j]=false;}
    }
  }
}
int main(){
	int n,d=0;scanf("%i",&n);bool p[n];sieve(p,n);
	for(int i=0;i<=n;i++){if(p[i]){d++;}}printf("%d",d);
}
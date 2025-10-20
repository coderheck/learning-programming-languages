// 15ms @ 920KB
#include"cstdio"
void sieve(bool a[]){
  for (int i=0;i<=100000;i++){a[i]=true;}
  a[0]=a[1]=false;
  for (int i=2;i*i<=100000;i++){
    if (a[i]){
      for (int j=i*i;j<=100000;j+=i){a[j]=false;}
    }
  }
}
int main(){
	bool p[100000];
	sieve(p);int n,d=0;
	scanf("%u",&n);
	for(int i=0;i<=n;i++){if(p[i]){d++;}}printf("%d",d);
}
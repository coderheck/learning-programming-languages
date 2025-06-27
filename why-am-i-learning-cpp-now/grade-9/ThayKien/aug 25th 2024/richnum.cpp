#include"iostream"
using namespace std;
#define maxN 1000000
int a,b,sech=0;bool pr[maxN];
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=2;j*i<=maxN;j++){pr[i*j]=false;}
    }
  }
}
int sumOfDivisors(int n){
  int sum=0;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      if(i==(n/i)){sum+=i;}else{sum+=(i+(n/i));}
    }
  }
	return(sum+1);
}
int main(){
  cin>>a>>b;
  int sumdiv[b+1];
    for (int i = 1; i <= b; ++i)
      for (int j = i; j <= b; j += i)
        sumdiv[j] += i;
  for(int i=a;i<=b;i++){
    if(sumdiv[i]>i){sech++;}
  }
  cout<<sech;
}
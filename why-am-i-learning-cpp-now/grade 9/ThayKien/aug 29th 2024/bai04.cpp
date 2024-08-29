#include"iostream"
using namespace std;
#define MaxN 1000000
int n,kien=0,sech=0;bool pr[MaxN];
void prSieve(){
  for(int i=2;i<=MaxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=MaxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=MaxN;j+=i){pr[j]=false;}
    }
  }
}
int tcs(int n){
  int ret=0;
  while(n!=0){ret+=n%10;n/=10;}
  return ret;
}
bool sprime(int n){
  while(n!=0){
    if(!pr[n]){return false;}
    n/=10;
  }
  return true;
}
int main(){
  prSieve();
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>sech;
    if(sprime(sech)&&pr[tcs(sech)]){kien++;cout<<sech<<" ";}
  }
  if(!kien){cout<<kien;}
}
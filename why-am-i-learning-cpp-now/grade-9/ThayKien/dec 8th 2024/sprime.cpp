#include"iostream"
using namespace std;
#define maxN 10000000
int a,b,n,cnt[maxN+5];
bool pr[maxN+5],good=false;
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
bool sprime(int x){
  while(x>0){
    if(!pr[x]){return false;}
    x/=10;
  }
  return true;
}
int main(){
  if(fopen("sprime.inp","r")){
    freopen("sprime.inp","r",stdin);
    freopen("sprime.out","w",stdout);
  }
  prSieve();
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(sprime(i)){cout<<i<<"\n";good=true;}
  }
  if(!good){cout<<"NO";}
}
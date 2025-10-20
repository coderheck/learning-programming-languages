#include"iostream"
#define maxN 1000000
using namespace std;
bool pr[maxN+1];int n,a,resTcs=0,res=0;
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
int tcs(int n){
  int ret=0;
  while(n!=0){ret+=n%10;n/=10;}
  return ret;
}
int main(){
  prSieve();
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    int tc=tcs(a);
    if(pr[a]&&tc>resTcs){res=a;resTcs=tc;}
  }
  cout<<res;
}
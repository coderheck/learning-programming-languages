#include"iostream"
using namespace std;
#define maxN 1000000
int k,n,ans;bool pr[maxN+1];
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
void proc(){
  for(int i=1;i<=n;i++){
    ans+=(pr[i]&&pr[i-k]&&i-k>1);
  }
  cout<<ans;
}
int main(){
  prSieve();
  cin>>n>>k;
  proc();
}
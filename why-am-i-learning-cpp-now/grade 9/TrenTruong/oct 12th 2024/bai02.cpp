#include"iostream"
#include"climits"
using namespace std;
#define maxN 1000001
bool pr[maxN];
void prsieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
bool sprime(int a){
  while(a!=0){
    if(!pr[a]){return false;}
    a/=10;
  }
  return true;
}
int n,a,r=0;
int main(){
  prsieve();
  if(fopen("bai02.inp","r")){
    freopen("bai02.inp","r",stdin);
    freopen("bai02.out","w",stdout);
  }
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    if(sprime(a)&&a>r){r=a;}
  }
  cout<<r;
}
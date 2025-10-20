#include"iostream"
using namespace std;
#define ll long long
#define maxN 2000000
bool pr[maxN+1];
void prsieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
bool bacthang(ll a){
  if(a<10){return false;}
  int r=a%10,l=(a/10)%10;
  while(a!=0&&a/10!=0){
    if(r<=l){return false;}
    a/=10;
    r=a%10,l=(a/10)%10;
  }
  return true;
}
int n,a,r=0;
int main(){
  prsieve();
  if(fopen("bai03.inp","r")){
    freopen("bai03.inp","r",stdin);
    freopen("bai03.out","w",stdout);
  }
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    if(pr[a]&&bacthang(a)&&a>r){r=a;}
  }
  cout<<r;
}
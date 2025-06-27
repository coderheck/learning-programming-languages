#include"iostream"
#include"cmath"
using namespace std;
#define maxP 1000000
#define ll long long
bool pr[maxP+5];
int n;ll a;
void prSieve(){
  for(int i=2;i<=maxP;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxP;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=false;}
    }
  }
}
int main(){
  if(fopen("three.inp","r")){
    freopen("three.inp","r",stdin);
    freopen("three.out","w",stdout);
  }
  prSieve();
  cin>>n;
  while(n--){
    cin>>a;
    ll sq=sqrt(a);
    if(sq*sq==a&&pr[sq]){cout<<"YES\n";}else{cout<<"NO\n";}
  }
}
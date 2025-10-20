#include"iostream"
#define ll long long
using namespace std;
bool nto(ll n){
  bool nt=true;
  if(n<=1){return false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){nt=false;break;}
  }
  return nt;
}
int main(){
  if(fopen("cau2-1.inp","r")){
    freopen("cau2-1.inp","r",stdin);
    freopen("cau2-1.out","w",stdout);
  }
  ll a,b,t=0;cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(nto(i)==true){t+=i;}
  }
  cout<<t;
}

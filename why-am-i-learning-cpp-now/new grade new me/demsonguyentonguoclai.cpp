#include"iostream"
#define ll long long
bool nguyento(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){nt=false;break;}
  }
  return nt;
}
ll nguoclai(ll n){
  ll n1=n,nl=0;
  while(n1!=0){nl*=10;nl+=n1%10;n1/=10;}
  return nl;
}
using namespace std;
int main(){
  if(fopen("demsonguyentonguoclai.inp","r")){
    freopen("demsonguyentonguoclai.inp","r",stdin);
  }
  ll a,b,so=0;cin>>a>>b;
  for(ll i=a;i<=b;i++){
    if(nguyento(i)&&nguyento(nguoclai(i))){so++;}
  }
  cout<<so;
}

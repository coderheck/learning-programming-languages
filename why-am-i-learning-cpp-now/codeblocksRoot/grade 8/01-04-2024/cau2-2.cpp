#include"iostream"
#define ll long long
using namespace std;
bool bacthang(ll n){
  ll n1=n;int tmp=n1%10;bool bt=true;
  if(n1<=9){bt=false;}else{
    while(n1!=0){
      n1/=10;
      if((n1%10)>tmp){bt=false;break;}
      tmp=n1%10;
    }
  }
  return bt;
}
int main(){
  if(fopen("cau2-2.inp","r")){
    freopen("cau2-2.inp","r",stdin);
    freopen("cau2-2.out","w",stdout);
  }
  int n,dem=0;cin>>n;
  for(int i=1;i<=n;i++){
    ll tmp;cin>>tmp;
    if(bacthang(tmp)==true){dem++;}
  }
  cout<<dem;
}

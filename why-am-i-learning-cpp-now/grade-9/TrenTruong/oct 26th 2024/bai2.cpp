#include"iostream"
using namespace std;
#define ll long long
int n,c=0;ll a,b;
bool pr(ll m){
  if(m<2){return false;}
  if(m%2==0){return false;}
  for(ll i=3;i*i<=m;i+=2){
    if(m%i==0){return false;}
  }
  return true;
}
int main(){
  if(fopen("bai2.inp","r")){
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);
  }
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a>>b;
    if(b%a==0){c+=pr(-b/a);}
  }
  cout<<c;
}
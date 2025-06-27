#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
bool ispr(ll n){
  if(n<2){return false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){return false;}
  }
  return true;
}
ll n;
void threedivs(){
  if(n==1){cout<<"LE\n";return;}
  ll sq=sqrt(n);
  if(sq*sq==n&&ispr(sq)){cout<<"LE\n";}else{cout<<"CHAN\n";}
}
int t;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>t;
  while(t--){
    cin>>n;
    threedivs();
  }
}
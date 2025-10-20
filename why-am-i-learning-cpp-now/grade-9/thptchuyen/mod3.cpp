#include"iostream"
using namespace std;
#define ll long long
unsigned long long mulMod(ll a,ll b,ll m){
  if(b==0)return 0;
  ll t=mulMod(a,b/2,m)%m;
  if(b&1){
    return((t+t)%m+a%m)%m;
  }else{
    return(t+t)%m;
  }
}
ll a,b,c;
int main(){
  cin>>a>>b>>c;
  cout<<mulMod(a,b,c);
}

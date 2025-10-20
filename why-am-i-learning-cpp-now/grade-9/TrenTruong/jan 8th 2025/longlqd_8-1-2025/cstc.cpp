#include"iostream"
using namespace std;
#define ll long long
void fastpowmod(ll a,unsigned ll b,ll c){
  ll res=1;a%=c;
  if(a==0){cout<<0;return;}
  while(b>0){
    if(b&1){res=((res%c)*(a%c))%c;}
    a=((a%c)*(a%c))%c;b>>=1;
  }
  cout<<res;
}
ll n;
int main(){
  cin>>n;
  fastpowmod(2024,n,10);
}
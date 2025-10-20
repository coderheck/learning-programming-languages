#include"iostream"
using namespace std;
#define ll long long
void compute(ll a,ll b,ll c){
  ll res=1;a%=c;
  if(a==0){cout<<0;return;};
  while(b>0){
    if(b%2==1){res=(res*a)%c;}
    b/=2;a=(a*a)%c;
  }
  cout<<res;
}
ll a,b,c;
int main(){
  cin>>a>>b>>c;
  compute(a,b,c);
}
#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
int t,n,x,y,z;
void findnum(){
  ll xyz=lcm(x,lcm(y,z)),r=pow(10,n)-1,l=pow(10,n-1);
  ll ans=(l+xyz-1)/xyz;
  ans*=xyz;
  if(ans>r){cout<<-1<<"\n";}else{cout<<ans<<"\n";}
}
int main(){
  cin>>t;
  while(t--){
    cin>>x>>y>>z>>n;
    findnum();
  }
}
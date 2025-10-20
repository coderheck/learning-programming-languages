#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll a,b,res=0;
void ans(){
  ll n=gcd(a,b);
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      res+=1+(i!=n/i);
    }
  }
  cout<<res;
}
int main(){
  cin>>a>>b;
  ans();
}
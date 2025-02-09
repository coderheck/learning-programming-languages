#include"iostream"
using namespace std;
#define ll long long
ll n;int res=2;
int main(){
  cin>>n;
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){res++;if(i!=n/i){res++;}}
  }
  cout<<res;
}
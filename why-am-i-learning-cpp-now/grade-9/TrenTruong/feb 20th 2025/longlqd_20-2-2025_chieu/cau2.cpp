#include"iostream"
using namespace std;
#define ll long long
int q;ll n,n1,p=1;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>q;
  while(q--){
    cin>>n;p=1;n1=n;
    for(ll i=2;i*i<=n;i++){
      if(n%i==0){p*=i;while(n%i==0){n/=i;}}
    }
    if(n>1){p*=n;}
    if(p<n1){cout<<"YES\n";}else{cout<<"NO\n";}
  }
}
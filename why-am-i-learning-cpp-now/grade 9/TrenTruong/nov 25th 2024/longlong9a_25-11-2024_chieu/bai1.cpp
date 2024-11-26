#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
int t;ll x;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin>>t;
  while(t--){
    cin>>x;
    ll j=sqrt(x);
    if(j*j==x){cout<<"LE\n";}else{cout<<"CHAN\n";}
  }
}
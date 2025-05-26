#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
ll t,n,c;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>t;
  while(t--){
    cin>>n;
    c=0;
    while(!(n&1)){n>>=1;c++;}
    if(c>0){cout<<2<<" "<<c<<" ";}
    for(ll i=3;i*i<=n;i+=2){
      c=0;
      while(n%i==0){n/=i;c++;}
      if(c>0){cout<<i<<" "<<c<<" ";}
    }
    if(n>1){cout<<n<<" "<<1<<"\n";}else{cout<<"\n";}
  }
}

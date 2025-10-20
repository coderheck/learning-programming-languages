#include<iostream>
using namespace std;
#define ll long long
ll n,res=0;
int main(){
  cin>>n;
  for(ll i=1;i*i<=n;i++){
    if(!(n%i)){res+=(i&1)+((n/i)!=i&&(n/i)&1);}
  }
  cout<<res;
}

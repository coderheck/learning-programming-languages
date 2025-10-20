#include<iostream>
using namespace std;
#define ll long long
ll n,s=0;
int main(){
  cin>>n;
  for(ll i=1;i*i<=n;i++){
    s+=n/i;
    if(i!=n/i){
      s+=i*(n/i-n/(i+1));
    }
  }
  cout<<s;
}
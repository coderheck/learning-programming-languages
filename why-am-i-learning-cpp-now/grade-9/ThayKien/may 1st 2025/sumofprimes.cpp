#include<iostream>
using namespace std;
#define ll long long
bool pr[100005];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=100000;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=100000;j+=i){pr[j]=true;}
    }
  }
}
bool isRevN(ll n){
  ll r=0,n1=n;
  while(n!=0){r=r*10+n%10;n/=10;}
  return r==n1;
}
ll t,l,r,s;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  prSieve();
  cin>>t;
  while(t--){
    cin>>l>>r;s=0;
    for(ll i=l;i<=r;i++){
      if(!pr[i]&&isRevN(i)){s+=i;}
    }
    cout<<s<<"\n";
  }
}
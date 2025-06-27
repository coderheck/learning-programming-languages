#include<iostream>
using namespace std;
#define ll long long
ll a,b,cnt[100005],res=0;
int main(){
  for(ll i=1;i<=100000;i++){cnt[i]=0;}
  for(ll i=1;i<=100000;i++){
    for(ll j=i*2;j<=100000;j+=i){cnt[j]+=i;}
  }
  cin>>a>>b;
  for(ll i=a;i<=b;i++){res+=(cnt[i]>i);}
  cout<<res;
}

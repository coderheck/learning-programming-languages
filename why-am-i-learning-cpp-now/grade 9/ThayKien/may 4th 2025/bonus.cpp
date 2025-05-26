#include<iostream>
using namespace std;
#define ll long long
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
ll n,d,a[100005],t=0,res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  prSieve();
  cin>>n>>d;
  for(ll i=0;i<n;i++){cin>>a[i];}
  for(ll i=0;i<d;i++){
    if(a[i]>1&&!pr[a[i]]){t+=a[i];}
  }
  res=t;
  for(ll i=d;i<n;i++){
    if(a[i-d]>1&&!pr[a[i-d]]){t-=a[i-d];}
    if(a[i]>1&&!pr[a[i]]){t+=a[i];}
    if(t>res){res=t;}
  }
  cout<<res;
}

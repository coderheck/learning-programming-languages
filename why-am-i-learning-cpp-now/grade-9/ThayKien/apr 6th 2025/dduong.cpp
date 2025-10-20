#include<iostream>
using namespace std;
#define ll long long
ll n,k,st=1000000,resc=0,a[100005],sum[100005];
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  for(ll i=1;i<=n;i++){cin>>a[i];sum[i]=sum[i-1]+a[i];}
  for(ll l=1;l<=n;l++){
    for(ll r=l;r<=n;r++){
      ll s=sum[r]-sum[l-1],c=r-l+1;
      if(s==k*c){
        if(c>resc||(c==resc&&l<st)){resc=c;st=l;}
      }
    }
  }
  cout<<st<<"\n"<<resc;
}
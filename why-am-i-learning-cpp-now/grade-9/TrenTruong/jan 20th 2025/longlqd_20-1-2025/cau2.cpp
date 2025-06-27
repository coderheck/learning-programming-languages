#include<iostream>
#define ll long long
using namespace std;
ll l,r,ans;
int p1[45],p[7]={2,3,5,7,11,13,17};
ll fastpowmod(ll a,ll b,ll c){
  ll res=1;
  while(b>0){
    if(b&1){res=(res*a)%c;}
    a=(a*a)%c;b>>=1;
  }
  return res;
}
bool test(ll a,ll m,int k,ll n){
  ll res=fastpowmod(a,m,n);
  if(res==n-1||res==1){return 1;}
  for(int i=1;i<k;i++){
    res=(res*res)%n;
    if(res==n-1){return 1;}
    if(res==1){return 0;}
  }
  return 0;
}
bool ispr_mr(ll n){
  for(int i=0;i<7;i++){if(p[i]==n){return 1;}}
  if(n<23){return 0;}
  ll m=n-1,k=0;
  while(!(m&1)){k++;m/=2;}
  for(int i=0;i<7;i++)
    if(!test(p[i],m,k,n))
      return 0;
  return 1;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>l>>r;
  p1[2]=p1[4]=p1[6]=p1[10]=p1[12]=p1[16]=p1[18]=p1[22]=p1[28]=p1[30]=p1[36]=p1[40]=1;
  for(ll i=2;i*i<=r;i++){
    if(ispr_mr(i)){
      ll x=i;
      for(int j=2;j<=41;j++){
        x*=i;
        if(x>r)break;
        if(p1[j])ans++;
      }
    }
  }
  cout<<ans;
}
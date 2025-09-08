#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long 
const ll maxN=1000000;
ll n,a[maxN+5],t[4*maxN+5];
void build(ll id,ll l,ll r){
  if(l==r){t[id]=a[l];return;}
  ll m=l+(r-l)/2;
  build(2*id,l,m);
  build(2*id+1,m+1,r);
  t[id]=t[2*id]+t[2*id+1]; // depends on the purpose of the tree, can be min/max/...
}
void update(ll id,ll l,ll r,ll i,ll val){
  if(i<l||i>r){return;}
  if(l==r){t[id]=val;return;}
  ll m=l+(r-l)/2;
  update(2*id,l,m,i,val);
  update(2*id+1,m+1,r,i,val);
  t[id]=t[2*id]+t[2*id+1];
}
ll get(ll id,ll l,ll r,ll u,ll v){
  if(u<l||r<u){return 0;}
  if(u<=l&&r<=v){return t[id];}
  ll m=l+(r-l)/2;
  ll t1=get(2*id,l,m,u,v);
  ll t2=get(2*id,m+1,r,u,v);
  return(t1+t2);
}
int main(){
  
}

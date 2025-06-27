#include<iostream>
#include<cmath>
#include<unordered_map>
using namespace std;
#define ll long long
#define umap unordered_map
ll n,a,maxa=1,i=0;umap<ll,ll>cnt;
int main(){
  cnt[0]=0;
  cin>>n;
  while(n--){
    cin>>a;
    ll sq=sqrt(a);
    if(sq*sq==a){cnt[a]++;}
  }
  while(1){
    ll sq=i*i;
    if(!cnt[sq]){cout<<sq;return 0;}
    i++;
  }
}

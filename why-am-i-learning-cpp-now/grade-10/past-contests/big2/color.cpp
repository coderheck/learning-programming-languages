#include<iostream>
using namespace std;
#define ll long long
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll n,k,i=0,j=0,c=0,res=0,a[500005],cnt[500005];
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>k;
  for(;i<n;i++){cin>>a[i];}
  i=0;
  while(j<n){
    if(!cnt[a[j]]){cnt[a[j]]++;c++;}else{cnt[a[j]]++;}
    if(c<=k){
      res=max(res,j-i+1);
    }else{
      while(c>k){
        cnt[a[i]]--;
        if(!cnt[a[i]]){c--;}
        i++;
      }
    }
    j++;
  }
  cout<<res;
}

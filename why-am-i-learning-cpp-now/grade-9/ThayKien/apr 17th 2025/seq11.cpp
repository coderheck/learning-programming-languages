#include<iostream>
using namespace std;
#define ll long long
ll n,a[1000005],curL=0,maxL=0,curS=0,maxS=0;
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i];}
  curL=maxL=1;maxS=curS=a[0];
  for(ll i=1;i<n;i++){
    if(a[i]>a[i-1]){
      curS+=a[i];curL++;
    }else{
      if(curL>maxL){
	maxL=curL;maxS=curS;
      }else if(curL==maxL){
	if(curS>maxS){maxS=curS;}
      }
      curL=1;curS=a[i];
    }
  }
  if(curL>maxL){
    maxL=curL;maxS=curS;
  }else if(curL==maxL){
    if(curS>maxS){maxS=curS;}
  }
  cout<<maxS;
}

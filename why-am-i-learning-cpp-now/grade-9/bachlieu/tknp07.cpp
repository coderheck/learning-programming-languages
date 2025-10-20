#include<iostream>
using namespace std;
int n,k,a[1000005];
bool myass(const int &m){
  int boxC=1,curW=0;
  for(int i=0;i<n;i++){
    if(a[i]>m){return false;}
    if(curW+a[i]>m){
      boxC++;curW=a[i];
      if(boxC>k){return false;}
    }else{
      curW+=a[i];
    }
  }
  return true;
}
void bitchsearch(){
  int l=1,r=10000005,m,res=0;
  while(l<=r){
    m=l+(r-l)/2;
    if(myass(m)){
      res=m;r=m-1;
    }else{
      l=m+1;
    }
  }
  cout<<res;
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];}
  bitchsearch();
}
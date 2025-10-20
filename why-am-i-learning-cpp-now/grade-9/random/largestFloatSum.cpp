#include <iostream>
#include <vector>
#define ll long long 
#define ld long double
ll n,maxL,rst,rnd,l;ld c,cs=0,resSum=0;
int main(){
  std::cin.tie(0)->sync_with_stdio(0);
  std::cin>>n;
  std::vector<ld>a(n+5);
  for(ll i=0;i<n;i++){std::cin>>a[i];}
  std::cin>>c;
  maxL=rst=l=0;cs=0;rnd=-1;
  for(ll r=0;r<n;r++){
    cs+=a[r];
    while(cs>=c){
      ll curL=r-l+1;
      if(curL>maxL){
        maxL=curL,rst=l,rnd=r;
      }
      cs-=a[l];l++;
    }
  }
  if(rnd==-1){std::cout<<"khong co doan con co tong >= c";return 0;}
  while(rnd+1<n&&a[rnd+1]==0){rnd++;maxL++;}
  for(ll i=rst;i<=rnd;i++){
    std::cout<<a[i]<<" ";
    resSum+=a[i];
  }
  std::cout<<"\n"<<resSum;
}

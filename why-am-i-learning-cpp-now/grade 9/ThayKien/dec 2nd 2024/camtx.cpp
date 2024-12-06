/*
  /\_/\
 ( o.o )
  > ^ <
*/
#include"iostream"
using namespace std;
#define ll long long
int n;ll k,h,a[1000005],maxO=0,cur=0,l=0;
int main(){
  cin>>n>>k>>h;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int r=0;r<n;r++){
    while((r-l)*k>h){
      cur-=a[l];l++;
    }
    cur+=a[r];
    if(maxO<cur){maxO=cur;}
  }
  cout<<maxO;
}
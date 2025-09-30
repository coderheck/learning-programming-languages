#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
struct pic{ll a,b;}a[500005];
bool cmpfn(const pic& a,const pic& b){
  if(a.a==b.a){
    return(a.b>b.b);
  }else if(a.b==b.b){
    return(a.a<b.a);
  }else{
    return(a.a<b.a);
  }
}
ll n,res=0,maxsize=0,minsize=1000000007,tot=0;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  for(ll i=0;i<n;i++){cin>>a[i].a>>a[i].b;}
  sort(a,a+n,cmpfn);
  cout<<(a[0].b+a[1].b)-(max(a[0].a,a[1].a)-min(a[0].a,a[1].a));
}

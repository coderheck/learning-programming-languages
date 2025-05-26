#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
struct oly{ll a,b;}a[100005];
bool cmpfn(const oly &a,const oly &b){
  return(a.a==b.a)?(a.b>b.b):(a.a<b.a);
}
ll n,c,res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>c;
  for(ll i=0;i<n;i++){cin>>a[i].a>>a[i].b;}
  sort(a,a+n,cmpfn);
  for(ll i=0;i<c;i++){
    if(c>=a[i].a){c+=a[i].b;res++;}else{break;}
  }
  cout<<"\n"<<res;
}

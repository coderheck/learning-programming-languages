#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
struct divs{ll t=0,f=0;}a[200];
bool cmpfn(const divs &a,const divs &b){
  if(a.f==b.f){return(a.t>b.t);}
  return(a.f>b.f);
}
divs twoandfive(ll &n){
  divs ret;
  while(n%2==0){ret.t++;n/=2;}
  while(n%5==0){ret.f++;n/=5;}
  return ret;
}
ll min(ll a,ll b){return(a<b)?a:b;}
int n,k;ll res=0,twos=0,fives=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>a[i].t;a[i]=twoandfive(a[i].t);
  }
  sort(a,a+n,cmpfn);
  for(int i=0;i<k;i++){twos+=a[i].t;fives+=a[i].f;}
  res=(min(twos,fives)*2+min(twos,fives)*5);
  cout<<res;
}
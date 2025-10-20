#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
int n;ll ans=1;
struct game{ll a,b;}a[1005];
bool cmpfn(const game &x,const game &y){
  if(x.a==x.a){
    return x.b<y.b;
  }else{
    return x.a<y.a;
  }
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i].a>>a[i].b;}
  sort(a,a+n,cmpfn);
  ll t=a[0].b;
  for(int i=1;i<n;i++){
    if(a[i].a>=t){
      ans++;
      t=a[i].b;
    }
  }
  cout<<ans;
}
#include"iostream"
#include"algorithm"
#define kbc main
#define ll long long
using namespace std;
int kbc(){
  if(fopen("phieu.inp","r")){
    freopen("phieu.inp","r",stdin);
    freopen("phieu.out","w",stdout);
  }
  ll n,steps=0;cin>>n;ll a[n],b[n],c[n],iter=0;
  for(ll i=0;i<n;i++){cin>>a[i];b[i]=a[i];}
  sort(b,b+n);
  c[iter]=b[0];iter++;steps++;
  while(iter<n-1){
    for(ll i=1;i<n;i++){
      if(b[i]>c[iter-1]){c[iter]=b[i];iter++;}
    }
    steps++;
  }
  cout<<steps;
}

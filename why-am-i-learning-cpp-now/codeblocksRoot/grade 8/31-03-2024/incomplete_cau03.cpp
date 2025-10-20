#include"iostream"
#define kbc main
#define ll long long
using namespace std;
int kbc(){
  if(fopen("cau03.inp","r")){
    freopen("cau03.inp","r",stdin);
    freopen("cau03.out","w",stdout);
  }
  int n;cin>>n;ll a[n],b[n],pa=0,pb=0;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    ll tmpB;cin>>tmpB;
    for(int j=0;j<n;j++){
      if(tmpB<a[j]){pa++;}else if(tmpB>a[j]){pb++;}
    }
  }
  if(pa>pb){cout<<"Yes";}else{cout<<"No";}
}

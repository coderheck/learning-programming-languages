#include"iostream"
#define kbc main
#define ll long long
using namespace std;
ll res=0;
int kbc(){
  if(fopen("tong.inp","r")){
    freopen("tong.inp","r",stdin);
    freopen("tong.out","w",stdout);
  }
  ll n;cin>>n;
  if(n%2==0){
    res=n/2;
  }else{
    res=(int)n/2*-1-1;
  }
  cout<<res;
}

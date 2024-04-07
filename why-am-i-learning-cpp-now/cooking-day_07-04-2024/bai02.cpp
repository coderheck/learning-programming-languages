#include"iostream"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
bool checkHH(ll n){
  ll t=0;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      t+=i;
      ll j=n/i;
      if(j!=i){t+=j;}
    }
  }
  return(n==t-n);
}
int kien(){
  kbc;
  if(fopen("cau1.inp","r")){
    freopen("cau1.inp","r",stdin);
    freopen("cau1.out","w",stdout);
  }
  int n,dHH=0,maxLen=0;cin>>n;int a[n];
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){if(checkHH(a[i])){dHH++;}}
  cout<<dHH<<"\n";
  for(int i=0;i<n;i++){
    int len=1,j1=i,j2=i+1;
    while(a[j1]<a[j2] && j2<n){len++;j1=j2;j2++;}
    if(len>maxLen){maxLen=len;}
  }
  cout<<maxLen;
}
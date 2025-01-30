#include"iostream"
using namespace std;
#define ll long long
int t;ll k,a,b,c=0;
void compute(ll n){
  int divs[50],dc=0;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){divs[dc++]=i;n/=i;}
  }
  if(n>1){divs[dc++]=n;}
  a=1;b=1;c=1;
  for(int i=0;i<dc;i++){
    if(a==1){
      a*=divs[i];
    }else if(b==1||a==b){
      b*=divs[i];
    }else{
      c*=divs[i];
    }
  }
  if(a==1||b==1||c==1||a==b||b==c||c==a){cout<<"NO";}else{cout<<"YES\n"<<a<<" "<<b<<" "<<c;}
  // if(!(n&1)){
  //   a=2;n/=2;
  //   if(!(n&1)){
  //     c=0;
  //     for(int i=2;(i*i<=n)&&(c<2);i++){
  //       if(n%i==0){if(!c){a=i;n/=i;c++;}else{b=i;n/=i;c++;}}
  //     }
  //     if(a*b*n==k&&n!=a&&n!=b&&a!=b){cout<<"YES\n"<<a<<" "<<b<<" "<<n;}else{cout<<"NO";}
  //   }else{cout<<"NO";}
  // }else{
  //   c=0;
  //   for(int i=3;(i*i<=n)&&(c<2);i+=2){
  //     if(n%i==0){if(!c){a=i;n/=i;c++;}else{b=i;n/=i;c++;}}
  //   }
  //   if(a*b*n==k&&n!=a&&n!=b&&a!=b){cout<<"YES\n"<<a<<" "<<b<<" "<<n;}else{cout<<"NO";}
  // }
  cout<<"\n";
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>t;
  while(t--){
    cin>>k;
    compute(k);
  }
}
#include"iostream"
using namespace std;
#define ll long long
ll n,m,a,b;
ll cdiv(ll a){
  ll res=0;
  for(ll i=2;i*i<=a;i++){
    if(a%i==0){
      if(i!=a/i){res+=i+a/i;}else{res+=i;}
    }
  }
  return res;
}
void lol(){
  ll a=cdiv(m),b=cdiv(n);
  (a==b&&a!=0)?cout<<"YES":cout<<"NO";
}
int main(){
  cin>>m>>n;
  lol();
}
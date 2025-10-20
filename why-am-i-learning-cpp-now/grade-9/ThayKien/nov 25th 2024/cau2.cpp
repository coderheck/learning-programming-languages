#include"iostream"
using namespace std;
#define ll long long
ll n;
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
  
}
int main(){
  cin>>n;
  lol();
}
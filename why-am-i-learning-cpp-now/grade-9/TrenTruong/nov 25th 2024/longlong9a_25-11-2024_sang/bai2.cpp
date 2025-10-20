#include"iostream"
using namespace std;
#define ll long long
#define maxN 1000000
ll a,res=0;
void parse(ll a){
  res=0;
  for(ll i=2;i*i<=a;i++){
    if(a%i==0){
      res++;
      while(a%i==0){a/=i;}
    }
  }
  if(a>2){cout<<res+1;}else{cout<<res;}
}
int main(){
  cin>>a;
  parse(a);
}
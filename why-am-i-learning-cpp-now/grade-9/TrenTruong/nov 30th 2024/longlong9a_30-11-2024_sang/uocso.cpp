#include"iostream"
#include"map"
using namespace std;
#define ll long long
ll a,b; int maxdiv=0;
map<int,int>divc,markdiv;
int demuoc(ll n){
  int r=0;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      r+=1+(i!=n/i);
    }
  }
  return r;
}
int main(){
  cin>>a>>b;
  for(ll i=a;i<=b;i++){
    int div=demuoc(i);
    divc[div]++;
    markdiv[i]=div;
    if(maxdiv<div){maxdiv=div;}
  }
  for(auto i:markdiv){
    if(i.second==maxdiv){cout<<i.first<<" ";break;}
  }
  cout<<maxdiv<<" "<<divc[maxdiv];
}
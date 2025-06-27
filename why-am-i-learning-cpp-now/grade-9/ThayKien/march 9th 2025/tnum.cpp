#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
int n;ll a;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>a;
    ll sq=sqrt(a);
    if(sq*sq==a&&!pr[a]){cout<<"YES\n";}else{cout<<"NO\n";}
  }
}
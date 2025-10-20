#include<iostream>
using namespace std;
#define ll long long
ll n,a,c=0;
int main(){
  if(fopen("uocso.inp","r")){
    freopen("uocso.inp","r",stdin);
    freopen("uocso.out","w",stdout);
  }
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>a;c=0;
    for(ll i=1;i*i<=a;i++){
      if(a%i==0){c+=1+(i!=a/i);}
    }
    cout<<c<<"\n";
  }
}
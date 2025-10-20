#include<iostream>
#include"vector"
using namespace std;
#define ull unsigned long long 
vector<ull>prs;
void sieve(int n){
    vector<bool>prime(n+1,true);
    for(int i=2;i*i<=n;i++){
      if(prime[i]==true){
        for (int j=i*2;j<=n;j+=i){prime[i]=false;}
      }
    }
    for (int p=2; p<=n; p++){
      if(prime[p])
        prs.push_back(p);
    }
}
ull factdiv(ull n){
  sieve(n);
  ull res=1;
  for (int i=0;i<prs.size();i++){
    ull p=prs[i];
    ull exp=0;
    while(p<=n){exp+=(n/p);p*=prs[i];}
    res*=(exp+1);
  }
  return res*2;
}
int n;
int main(){
  if(fopen("demuoc.inp","r")){
    freopen("demuoc.inp","r",stdin);
    freopen("demuoc.out","w",stdout);
  }
  cin>>n;
  cout<<factdiv(n);
}

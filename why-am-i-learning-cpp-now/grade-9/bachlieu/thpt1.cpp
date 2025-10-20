#include<iostream>
using namespace std;
#define ll long long
ll max(const ll &a,const ll &b){return(a>b)?a:b;}
ll n,a,res=0;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>a;
    if(a<0){res+=a;}
  }
  cout<<res;
}

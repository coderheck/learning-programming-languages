#include"iostream"
using namespace std;
#define ll long long
ll m,n,res=0;
// void check(){
//   ll res=0,i=1;
//   while(m--){
//     if(m%2==0){
//       res+=i;
//       i++;
//     }else{
//       res+=n;
//       n--;
//     }
//   }
//   cout<<'\n'<<res;
// }
ll tds(ll a,ll b){
  ll ssh=b-a+1;
  return(a+b)*ssh/2;
}
int main(){
  if(fopen("cau1b.inp","r")){
    freopen("cau1b.inp","r",stdin);
    freopen("cau1b.out","w",stdout);
  }
  cin>>n>>m;
  res+=tds(n-m/2+1,n);
  if(m%2==0){
    res+=tds(1,m/2);
  }else{
    res+=tds(1,m/2+1);
  }
  cout<<res;
  // check();
}
// 1+n = 2+n-1 = 1+m
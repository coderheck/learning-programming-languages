#include"iostream"
#include"cmath"
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
int n,res=0;ll a;
void lame(){
  ll sq=sqrt(a);
  res+=(sq*sq==a&&!pr[sq]);
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  prSieve();
  cin>>n;
  while(n--){cin>>a;lame();}
  cout<<res;
}
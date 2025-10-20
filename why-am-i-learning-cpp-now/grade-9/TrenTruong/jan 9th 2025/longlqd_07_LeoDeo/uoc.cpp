#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
bool threedivs(ll &n){
  ll sq=sqrt(n);
  return((!pr[sq])&&(sq*sq==n));
}
int n,res=0;ll a;
int main(){
  prSieve();
  cin>>n;
  while(n--){
    cin>>a;
    res+=threedivs(a);
  }
  cout<<res;
}
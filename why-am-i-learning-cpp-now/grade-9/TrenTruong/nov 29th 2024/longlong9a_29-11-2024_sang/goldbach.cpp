#include"iostream"
using namespace std;
#define maxN 1000000
#define ll long long
int n;ll k,sum=0;
bool pr[maxN+1];
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=n;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
bool checknt(ll x){
  for(ll i=2;i*i<=x;i++){
    if(x%i==0){
      return false;
    }
  }
  return true;
}
void check(){
  for(ll i=2;i<=maxN;i++){
    if(pr[i]&&checknt(k-i)){
      cout<<i<<" "<<k-i<<"\n";
      return;
    }
  }
  cout<<"NO\n";
}
int main(){
  prSieve();
  cin>>n;
  while(n--){
    cin>>k;
    check();
  }
}
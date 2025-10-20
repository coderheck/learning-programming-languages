#include"iostream"
using namespace std;
#define maxP 1000000
#define ll long long
bool pr[maxP+5];
int prs[maxP],prc=0;
void prSieve(){
  pr[0]=pr[1]=true;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      prs[prc++]=i;
      for(int j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
bool isPrime(int n){
  if(n%2==0){return false;}
  for(ll i=3;i*i<=n;i+=2){
    if(n%i==0){return false;}
  }
  return true;
}
int tcs(int n){
  int r=0;
  while(n!=0){r+=n%10;n/=10;}
  return r;
}
void fuck(int n){
  if(n>maxP){
    if(isPrime(n)){cout<<"0\n";return;}
  }else if(!pr[n]){
    cout<<"0\n";return;
  }
  int tot=0,tc=tcs(n);
  while(n%2==0){n/=2;tot+=2;}
  for(int i=3;i*i<=n;i+=2){
    while(n%i==0){
      tot+=tcs(i);
      n/=i;
    }
  }
  if(n>1){tot+=tcs(n);}
  cout<<(tot==tc)<<"\n";
}
int t;ll n;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  prSieve();
  cin>>t;
  while(t--){
    cin>>n;
    fuck(n);
  }
}
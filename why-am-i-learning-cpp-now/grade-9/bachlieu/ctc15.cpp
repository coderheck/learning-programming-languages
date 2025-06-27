#include"iostream"
using namespace std;
#define maxN 1000
int n;bool pr[maxN+5];
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
int main(){
  prSieve();
  cin>>n;
  if(pr[n]){cout<<"YES\n";}else{cout<<"NO\n";}
  for(int i=n-1;i>=2;i--){
    if(pr[i]){cout<<i;return 0;}
  }
  cout<<0;
}
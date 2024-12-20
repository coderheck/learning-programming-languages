#include"iostream"
using namespace std;
#define maxN 10000000
int l,r;bool pr[maxN+5];
void prSieve(){
  for(int i=2;i*i<=maxN;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=true;}
    }
  }
}
int tcs(int n){
  int r=0;
  while(n!=0){
    r+=(n%10);
    n/=10;
  }
  return r;
}
int main(){
  prSieve();
  cin>>l>>r;
  for(int i=l;i<=r;i++){
    if(!pr[i]&&!pr[tcs(i)]){cout<<i<<" ";}
  }
}
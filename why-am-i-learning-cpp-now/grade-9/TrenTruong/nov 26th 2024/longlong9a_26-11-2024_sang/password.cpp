#include"iostream"
using namespace std;
#define maxN 10000000
bool pr[maxN+1];
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
int tcs(int n){
  int r=0;
  while(n!=0){r+=(n%10);n/=10;}
  return r;
}
int l,r,res=0;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  prSieve();
  cin>>l>>r;
  for(int i=l;i<=r;i++){
    if(pr[i]&&pr[tcs(i)]){cout<<i<<" ";}
  }
}
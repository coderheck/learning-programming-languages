#include"iostream"
using namespace std;
#define maxA 2000000
bool pr[2000002];
int n,a,res=0;
void prSieve(){
  for(int i=2;i<=maxA;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxA;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxA;j+=i){pr[j]=false;}
    }
  }
}
bool IsLadderPrime(){
  int a1=a;
  if(a<10){return false;}
  int r=a%10,l=(a/10)%10;
  while(a!=0&&a/10!=0){
    if(r<=l){return false;}
    a/=10;
    r=a%10,l=(a/10)%10;
  }
  return pr[a1];
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  prSieve();
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    res+=IsLadderPrime();
  }
  cout<<res;
}
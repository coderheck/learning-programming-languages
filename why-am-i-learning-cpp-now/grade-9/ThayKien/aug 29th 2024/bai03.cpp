#include"iostream"
using namespace std;
#define maxN 1000005
bool pr[maxN];int n,a,res=0;
void prSieve(){
  for(int i=2;i<maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
bool IsLadderNumber(long long n){
  int c;
  if(n<10){return false;}
  while(n>0){
    c=n%10;n/=10;if(n%10>=c){return false;}
  }
  return true;
}
int main(){
  prSieve();
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    if(pr[a]&&IsLadderNumber(a)&&a>9&&a>res){res=a;}
  }
  cout<<res;
}

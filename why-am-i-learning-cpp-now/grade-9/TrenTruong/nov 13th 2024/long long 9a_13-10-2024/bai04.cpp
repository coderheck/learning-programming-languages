#include"iostream"
using namespace std;
#define ll long long
#define maxN 2000000
bool pr[maxN+1];int n,x,res=0;
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
bool IsLadderNumber(long long a){
  if(a<10){return false;}
  int r=a%10,l=(a/10)%10;
  while(a!=0&&a/10!=0){
    if(r<=l){return false;}
    a/=10;
    r=a%10,l=(a/10)%10;
  }
  return true;
}
int main(){
  if(fopen("bai04.inp","r")){
    freopen("bai04.inp","r",stdin);
    freopen("bai04.out","w",stdout);
  }
  prSieve();
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>x;
    if(IsLadderNumber(x)&&pr[x]){res++;}
  }
  cout<<res;
}
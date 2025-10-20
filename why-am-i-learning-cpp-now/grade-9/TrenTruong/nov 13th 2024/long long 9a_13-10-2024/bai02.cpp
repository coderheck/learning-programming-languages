#include"iostream"
using namespace std;
#define ll long long
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
int a,b,res=0;
int revNum(int n){
  int ret=0;
  while(n!=0){ret*=10;ret+=n%10;n/=10;}
  return ret;
}
int main(){
  if(fopen("bai02.inp","r")){
    freopen("bai02.inp","r",stdin);
    freopen("bai02.out","w",stdout);
  }
  prSieve();
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    if(pr[i]&&pr[revNum(i)]){res++;}
  }
  cout<<res;
}
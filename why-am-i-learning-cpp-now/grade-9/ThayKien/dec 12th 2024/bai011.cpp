#include"iostream"
using namespace std;
#define maxN 2000000
int n,a,res=0;bool pr[maxN+5];
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
bool ladderprime(int x){
  if(x<10){return false;}
  int l=(x/10)%10,r=x%10,x1=x;
  while(x!=0&&x/10!=0){
    if(l>=r){return false;}
    r=l;l=(x/10)%10;
    x/=10;
  }
  return pr[x1];
}
int main(){
  prSieve();
  cin>>n;
  while(n--){
    cin>>a;res+=ladderprime(a);
  }
  cout<<res;
}
#include"iostream"
using namespace std;
#define ll long long
#define maxP 1000000
bool pr[maxP+5];int prs[maxP],prc=0;
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      prs[prc++]=i;
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
int cexp(int n,int pr){
  int r=0;
  while(n>0){n/=pr;r+=n;}
  return r;
}
ll n,res=0;
int main(){
  prSieve();
  cin>>n;
  for(int i=0;i<prc;i++){
    if(prs[i]>n){break;}
    res+=cexp(n,prs[i]);
  }
  cout<<res;
}
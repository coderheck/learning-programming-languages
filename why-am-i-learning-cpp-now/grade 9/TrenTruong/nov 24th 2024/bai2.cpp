#include"iostream"
#include"cstring"
using namespace std;
const int maxN=1000000;
int prs[maxN],prC=0,iC=0,n,res=0;
bool ispr[maxN+1];
void sieve(){
  memset(ispr,true,sizeof(ispr));
  ispr[0]=ispr[1]=false;
  for(int i=2;i<=maxN;i++) {
    if(ispr[i]){
      prs[prC++]=i;
      for(int j=i*2;j<=maxN;j+=i){ispr[j]=false;}
    }
  }
}
int countExp(int n,int pr) {
  int c=0;
  while(n>0){n/=pr;c+=n;}
  return c;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  sieve();
  cin>>n;
  for(int j=0;j<prC;j++) {
    if(prs[j]>n){break;}
    int c=countExp(n,prs[j]);
    if(c>0){res+=c;}
  }
  cout<<res;
}
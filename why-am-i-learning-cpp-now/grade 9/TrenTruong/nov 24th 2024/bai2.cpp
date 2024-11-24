#include"iostream"
#include"cstring"
using namespace std;
const int MAX_N=100000;
const int MAX_PRIME=1000000;
int prs[MAX_PRIME],prC=0,a[MAX_N],iC=0,N,maxN=0,res=0;
void sieve(){
  bool ispr[MAX_PRIME+1];
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
  while(cin>>N){
    a[iC++]=N;
    if(N>maxN){maxN=N;}
  }
  sieve();
  for(int i=0;i<iC;i++) {
    for(int j=0;j<prC;j++) {
      if(prs[j]>a[i]){break;}
      int c=countExp(a[i],prs[j]);
      if(c>0){res+=c;}
    }
    cout<<"\n";
  }
}

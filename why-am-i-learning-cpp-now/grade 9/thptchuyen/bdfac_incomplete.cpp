#include"iostream"
#include"string"
using namespace std;
#define maxN 1000001
bool pr[maxN],b[maxN];
void prSieve(){
  for(int i=2;i<maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
bool nt(int n){
  return pr[n];
}
void pt(int x) {
  int d=2;
  while(d*d<=x){
    if(x%d==0){b[d]=true;x/=d;}else{d++;}
  }
  b[x]=true;
}
int main(){
  prSieve();
  string res("");
  int n;cin>>n;
  for(int i=1;i<=maxN;i++){b[i]=false;}
  for(int i=2;i<=n;i++){pt(i);}
  for(int j=2;j<=n;j++) {
    if(nt(j)&&b[j]!=0) {
      cin>>b[j];
    }
  }
}

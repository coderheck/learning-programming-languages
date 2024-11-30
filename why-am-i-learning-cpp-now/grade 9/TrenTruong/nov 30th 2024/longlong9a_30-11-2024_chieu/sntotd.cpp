#include"iostream"
using namespace std;
#define maxN 100000
#define maxP 1000000
bool pr[maxP+1];
void prSieve(){
  for(int i=2;i<=maxP;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxP;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=false;}
    }
  }
}
bool checkdivright(int n){
  while(n!=0){
    if(!pr[n]){return false;}
    n/=10;
  }
  return true;
}
bool checkeveryright(int n){
  for(int i=3;i<=9;i+=2){
    n=(n*10)+i;
    if(pr[n]){return true;}
    n/=10;
  }
  return false;
}
int n,m,u,v,a[maxN+5],cnt[maxN+5];
void preproc(){
  for(int i=1;i<=n;i++){
    cnt[i]=cnt[i-1]; 
    cnt[i]+=(pr[a[i]] && checkdivright(a[i]) && checkeveryright(a[i]));
  }
}
int main(){
  prSieve();
  cin>>n;
  for(int i=1;i<=n;i++){cin>>a[i];}
  cin>>m;
  preproc();
  while(m--){
    cin>>u>>v;
    cout<<cnt[v]-cnt[u-1]<<"\n";
  }
}
#include"iostream"
using namespace std;
#define maxN 10000000
int a,b,cnt[maxN+5];
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
void preproc(){
  for(int i=2;i<=maxN;i++){
    cnt[i]=cnt[i-1]+pr[i];
  }
}
int main(){
  prSieve();
  preproc();
  cin>>a>>b;
  cout<<cnt[b]-cnt[a-1];
}
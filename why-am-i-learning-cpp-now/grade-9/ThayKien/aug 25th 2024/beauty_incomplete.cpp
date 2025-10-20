#include"iostream"
#define maxN 10000000
using namespace std;
#define ll long long
bool pr[maxN];int n;
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=2;j*i<=maxN;j++){pr[i*j]=false;}
    }
  }
}
bool beau(int n){
  int tbp=0;
  while(n!=0){
    tbp+=((n%10)*(n%10));
    n/=10;
  }
  return pr[tbp];
}
int main(){
  prSieve();
  cin>>n;
  for(int c=1;c<=n;c++){
    int a,b,sex=0;cin>>a>>b;
    for(int i=a;i<=b;i++){
      if(beau(i)){sex++;}
    }
    cout<<sex<<"\n";
  }
}
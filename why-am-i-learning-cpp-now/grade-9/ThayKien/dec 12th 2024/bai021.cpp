#include"iostream"
using namespace std;
#define maxN 2000000
bool pr[maxN+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(int i=2;i*i<=maxN;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=true;}
    }
  }
}
int tcs(int x){
  int r=0;
  while(x!=0){
    r+=(x%10);x/=10;
  }
  return r;
}
int n,a[100005],maxp=0,res=0;
int main(){
  prSieve();
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    if(!pr[a[i]]&&a[i]>maxp){
      res=tcs(a[i]);
      maxp=a[i];
    }
  }
  cout<<res;
}
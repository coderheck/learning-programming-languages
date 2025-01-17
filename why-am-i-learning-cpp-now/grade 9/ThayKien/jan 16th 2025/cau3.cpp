#include"iostream"
using namespace std;
#define maxP 1000000
int tcs(int n){
  int r=0;
  while(n!=0){r+=n%10;n/=10;}
  return r;
}
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
int n,a,res=0;
int main(){
  prSieve();
  cin>>n;
  while(n--){
    cin>>a;
    res+=((!pr[a])&&(!pr[tcs(a)]));
  }
  cout<<res;
}
#include"iostream"
using namespace std;
#define maxN 1000000
bool pr[maxN+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxN;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=!false;}
    }
  }
}
int n,k,res=0;
int main(){
  prSieve();
  cin>>n>>k;
  for(int i=1;i+k<=n;i++){
    res+=(!pr[i]&&!pr[i+k]);
  }
  cout<<res;
}
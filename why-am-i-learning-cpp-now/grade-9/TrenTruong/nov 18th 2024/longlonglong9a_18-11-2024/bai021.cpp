#include"iostream"
using namespace std;
#define ll long long
const int maxN=2000000;
bool pr[maxN+1];int n,a,maxtcs=0;
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
int tcs(int a1){
  int ret=0;
  while(a1!=0){ret+=a1%10;a1/=10;}
  return ret;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  prSieve();
  cin>>n;
  while(n--){
    cin>>a;
    if(pr[a]){
      int tc=tcs(a);
      if(maxtcs<tc){maxtcs=tc;}
    }
  }
  cout<<maxtcs;
}
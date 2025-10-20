#include"iostream"
using namespace std;
#define maxN 1000000
int n,a,prC=0,maxA=-1,cnt[maxN+5];
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
void parseOccurence(){
  for(int i=1;i<=maxA;i++){
    if(!cnt[i]){cout<<i;return;}
  }
  cout<<maxA+1;
}
int main(){
  prSieve();
  cin>>n;
  while(n--){
    cin>>a;cnt[a]++;
    prC+=pr[a];
    maxA=(maxA<a)?a:maxA;
  }
  cout<<prC<<"\n";
  parseOccurence();
}
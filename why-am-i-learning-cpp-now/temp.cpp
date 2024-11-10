#include"iostream"
using namespace std;
#define maxn 100000000
bool pr[maxn+1];
void prSieve(){
  for(int i=2;i<maxn;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxn;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxn;j+=i){pr[j]=false;}
    }
  }
}
int main(){prSieve();cout<<pr[97381];}

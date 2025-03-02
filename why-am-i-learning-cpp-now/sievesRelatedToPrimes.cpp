#include"iostream"
#include"vector"
using namespace std;
#define maxN 1000000
bool pr[maxN];
void prSieve(){
  for(int i=2;i<maxN;i++){pr[i]=1;}
  pr[0]=pr[1]=0;
  for(int i=2;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=0;}
    }
  }
}
int main(){
  prSieve();

  vector<int>divs(maxN+1,1);
  for(int i=1;i<=maxN;i++){
    for(int j=i*2;j<=maxN;j+=i){divs[j]++;}
  }

  vector<int>sumdiv(maxN+1,0);
  for(int i=1;i<=maxN;i++){
    for(int j=i;j<=maxN;j+=i){sumdiv[j]+=i;}
  }

  cout<<divs[1000000];
}

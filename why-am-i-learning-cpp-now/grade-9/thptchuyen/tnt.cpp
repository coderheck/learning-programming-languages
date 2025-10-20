#include"iostream"
using namespace std;
#define maxP 10000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
int a,b;long long res=0;
int main(){
  prSieve();
  cin>>a>>b;
  for(int i=a;i<=b;i++){res+=(!pr[i])?i:0;}
  cout<<res;
}
#include"iostream"
using namespace std;
#define maxP 1000000
bool pr[maxP+5];int n;
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
int main(){
  prSieve();
  cin>>n;
  !pr[n]?cout<<"YES":cout<<"NO";
}
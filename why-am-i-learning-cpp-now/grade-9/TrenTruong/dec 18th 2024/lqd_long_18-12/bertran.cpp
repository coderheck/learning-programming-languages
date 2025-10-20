#include"iostream"
using namespace std;
#define maxN 2000000
int p,ps=0;bool pr[maxN+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(int i=2;i*i<=maxN;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=true;}
    }
  }
}
int main(){
  prSieve();
  cin>>p;
  for(int i=p+1;i<2*p;i++){
    if(!pr[i]){
      cout<<i<<" ";ps++;
    }
  }
  cout<<"\n"<<ps;
}
#include"iostream"
using namespace std;
#define maxP 10000000
#define modx 1000000007
#define ll long long
int c=1,l,r;ll f=0;
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
int main(){
  prSieve();
  cin>>l>>r;
  for(int i=l;i<=r;i++){
    if(!pr[i]){
      f=(f%modx)+((c*i)%modx);
      c++;
    }
  }
  cout<<f;
}
#include"iostream"
#include"cmath"
using namespace std;
#define maxN 1000000
#define ll long long
int scp[maxN+5];int n;ll a,res=1;
void preproc(){
  for(int i=1;i*i<=maxN;i++){scp[i*i]=1;}
}
bool isSCP(ll x){
  ll sq=sqrt(x);
  return(sq*sq==x);
}
int main(){
  preproc();
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    if(scp[a]==1&&a<=1000000){scp[a]=2;}
  }
  while(true){
    if(isSCP(res)&&(res>1000000||scp[res]==1)){
      cout<<res;exit(0);
    }
    res++;
  }
}
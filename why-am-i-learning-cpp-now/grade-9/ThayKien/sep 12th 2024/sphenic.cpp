#include"iostream"
using namespace std;
int t;
void sph(int n){
  int c=0;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){c++;n/=i;}
    if(n%i==0){cout<<0<<"\n";return;}
  }
  if(n>1){c++;}
  if(c==3){cout<<1<<"\n";}else{cout<<0<<"\n";}
}
int main(){
  cin>>t;
  for(int i=1;i<=t;i++){
    int n;cin>>n;
    sph(n);
  }
}
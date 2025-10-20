#include"iostream"
using namespace std;
bool threePrDivs(int n){
  int prdivs=0;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){prdivs++;}
    while(n%i==0){n/=i;}
  }
  if(n>1){prdivs++;}
  return(prdivs>=3);
}
int main(){
  int a[10001] = {0};
  int index=0,dem=1;
  for (int i=1;i<=10001;i++){
    index++;
    if(threePrDivs(index)){
      a[dem]=index;
      dem++;
    }
  }
  int t;cin>>t;
  for(int i=1;i<=t;i++){
    int n;cin>>n;cout<<a[n]<<"\n";
  }
}
#include"iostream"
#include"cmath"
#include"vector"
using namespace std;
bool nto(int n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(int i=2;i*i<=n;i++){
    if(n%i==0){nt=false;break;}
  }
  return nt;
}
bool cphuong(int n){
  int sech=sqrt(n);
  return (sech*sech==n);
}
int main(){
  int n,tnt=0;cin>>n;int a[n];vector<int>cp;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(nto(a[i])){tnt+=a[i];}
    if(cphuong(a[i])){cp.push_back(a[i]);}
  }
  cout<<tnt<<"\n";
  for(int i=0;i<cp.size();i++){cout<<cp[i]<<" ";}
  cout<<"\n";
  for(int i=n-1;i>=0;i--){cout<<a[i]<<" ";}
}
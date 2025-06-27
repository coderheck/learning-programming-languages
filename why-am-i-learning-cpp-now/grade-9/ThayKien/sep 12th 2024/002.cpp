#include"iostream"
using namespace std;
int main(){
  int n,maxN=-1;cin>>n;
  for(int i=1;i<=n;i++){
    int a;cin>>a;
    if(a%2==0&&a>maxN){maxN=a;}
  }
  cout<<maxN;
}
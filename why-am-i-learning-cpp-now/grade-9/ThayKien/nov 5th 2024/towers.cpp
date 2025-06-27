#include"iostream"
using namespace std;
int n,res=0;
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    res+=(i*(i+1))/2;
  }
  cout<<res;
}
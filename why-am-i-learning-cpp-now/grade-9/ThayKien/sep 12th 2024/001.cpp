#include"iostream"
using namespace std;
int main(){
  int n,res;cin>>n;
  (n<=0)?!(n%2)?res=n-2:res=n-1:res=-2;
  cout<<res;
}
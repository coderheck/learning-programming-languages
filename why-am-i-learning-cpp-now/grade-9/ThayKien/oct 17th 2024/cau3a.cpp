#include"iostream"
#include"string"
using namespace std;
int n,res=0;string a;
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    res+=a[a.size()-1]-'0';
  }
  cout<<res;
}
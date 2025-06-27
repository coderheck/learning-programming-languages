#include"iostream"
using namespace std;
int main(){
  int n,leave=0;cin>>n;
  for(int i=1;i<=n;i++){int a;cin>>a;if(a==1){leave++;}}
  (leave>n/2)?cout<<"YES":cout<<"NO";
}
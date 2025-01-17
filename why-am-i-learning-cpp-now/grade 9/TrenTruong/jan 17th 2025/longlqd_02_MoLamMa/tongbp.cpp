#include"iostream"
using namespace std;
#define ull unsigned long long
ull n,res=0;int t;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>t;
  while(t--){
    cin>>n;
    cout<<(n*(n+1)*(2*n+1))/6<<"\n";
  }
}
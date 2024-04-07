#include"iostream"
#define ll long long
using namespace std;
int main(){
  long long n,m;cin>>n>>m;
  cout<<min(n,m)<<" "<<(max(n,m)-min(n,m))/2;
}

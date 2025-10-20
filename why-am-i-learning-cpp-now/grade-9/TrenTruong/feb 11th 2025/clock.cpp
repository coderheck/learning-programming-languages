#include"iostream"
using namespace std;
#define ll long long
ll m,n;
int main(){
  cin>>m>>n;
  n%=60;m+=n;
  cout<<m%60;
}
#include"iostream"
using namespace std;
#define ll long long
ll m,n,k,minSquare;
int main(){
  // freopen("cathinh.inp","r",stdin);
  // freopen("cathinh.out","w",stdout);
  cin>>m>>n>>k;
  cout<<m*n-k*k*(m/k)*(n/k);
}
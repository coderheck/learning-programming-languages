#include"iostream"
#include<math.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main(){
  if(fopen("cau1b.inp","r")){
    freopen("cau1b.inp","r",stdin);
    freopen("cau1b.out","w",stdout);
  }
  int n,k,res=0;cin>>n>>k;
  while(n>0){n-=k;k*=2;res++;}
  cout<<res;
}

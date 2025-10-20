#include"iostream"
#include"iomanip"
#include<math.h>
using namespace std;
int main(){
  if(fopen("cau2a.inp","r")){
    freopen("cau2a.inp","r",stdin);
    freopen("cau2a.out","w",stdout);
  }
  int n;long double res=0;cin>>n;
  cout<<res;
}

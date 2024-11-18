#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
ll m,n;
int main(){
  if(fopen("cau2a.inp","r")){
    freopen("cau2a.inp","r",stdin);
    freopen("cau2a.out","w",stdout);
  }
  cin>>m>>n;
  cout<<n*ceil(m*1.0/n)-m;
}
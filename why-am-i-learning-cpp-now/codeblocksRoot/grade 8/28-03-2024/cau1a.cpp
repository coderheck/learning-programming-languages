#include"iostream"
#include<math.h>
typedef long long ll;
using namespace std;
int main(){
  if(fopen("cau1a.inp","r")){
    freopen("cau1a.inp","r",stdin);
    freopen("cau1a.out","w",stdout);
  }
  int n;ll s=0;cin>>n;
  for(int i=1;i<=n;i++){
    if(i%2==1){s-=i;}else{s+=i;}
  }
  cout<<s;
}

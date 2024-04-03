#include"iostream"
#include"algorithm"
#define ull long long
using namespace std;
int main(){
  if(fopen("cau5.inp","r")){
    freopen("cau5.inp","r",stdin);
    freopen("cau5.out","w",stdout);
  }
  ull n,k,d=0;cin>>n>>k;ull a[n];
  for(ull i=0;i<n;i++){cin>>a[n];}
  for(ull i=0;i<n;i++){
    ull tmp=a[i];cout<<a[i]<<" ";
    for(ull j=i+1;j<n;j++){
      ull iter=i+1,tmp2=tmp;
      while(iter<=j){tmp2+=a[iter];cout<<a[iter]<<" ";iter++;}
      if(tmp2%k==0){d++;}
      cout<<"\n";
    }
  }
  cout<<d;
}

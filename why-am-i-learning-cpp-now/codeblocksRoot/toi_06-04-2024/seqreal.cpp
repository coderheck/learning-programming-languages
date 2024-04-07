#include"iostream"
#include"iomanip"
using namespace std;
int main(){
  int n;cin>>n;long double a[n];long double t=0,ta=0,td=0,tc=0,tl=0;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    t+=a[i];
    if(a[i]<0){ta+=a[i];}
    if(a[i]>0){td+=a[i];}
    if(i%2==0){tl+=a[i];}else{tc+=a[i];}
  }
  cout<<fixed<<setprecision(2)<<t<<" "<<ta<<" "<<td<<" "<<tc<<" "<<tl;
}

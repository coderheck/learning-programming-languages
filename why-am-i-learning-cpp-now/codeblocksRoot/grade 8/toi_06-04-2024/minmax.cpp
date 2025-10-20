#include"iostream"
#include"algorithm"
#include"iomanip"
using namespace std;
int main(){
  int n;cin>>n;long double maxN=0,minN=20000000;
  for(int i=1;i<=n;i++){
    long double t;cin>>t;
    maxN=max(maxN,t);minN=min(minN,t);
  }
  cout<<fixed<<setprecision(2)<<maxN<<" "<<minN;
}

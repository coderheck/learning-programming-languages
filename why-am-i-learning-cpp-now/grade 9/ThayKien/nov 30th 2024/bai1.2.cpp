#include"iostream"
#include"iomanip"
using namespace std;
#define ld long double
int n;ld res=0;
int main(){
  cin>>n;
  for(int i=2;i<=n;i++){
    if(i&1){res-=1.0/i;}else{res+=1.0/i;}
  }
  cout<<fixed<<setprecision(5)<<res;
}
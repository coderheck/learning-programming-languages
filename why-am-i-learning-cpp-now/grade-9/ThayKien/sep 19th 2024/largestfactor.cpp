#include"iostream"
using namespace std;
#define ll long long
ll t,n,sech;
int main(){
  cin>>t;
  while(t--){
    cin>>n;
    while(n%2==0){sech=2;n/=2;}
    for(long long i=3;i*i<=n;i+=2){
      while(n%i==0){sech=i;n/=i;}
    }
    if(n>1){sech=n;}
    cout<<sech<<"\n";
  }
}
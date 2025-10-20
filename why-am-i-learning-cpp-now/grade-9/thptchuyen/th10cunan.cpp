#include"iostream"
#include"iomanip"
using namespace std;
int d,v1,v2;
int main(){
  cin>>d>>v1>>v2;
  cout<<fixed<<setprecision(1)<<1.0*d/(v1+v2);
}
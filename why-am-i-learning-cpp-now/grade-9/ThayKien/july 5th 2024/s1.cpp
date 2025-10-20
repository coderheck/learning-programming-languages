#include"iostream"
#include"iomanip"
#define ll long long
using namespace std;
float s1=0;int i=1;ll a,b;
int main(){
  cin>>a>>b;
  while(a*1.0/(b+i)>=0.0001){
    s1+=a*1.0/(b+i);
    i++;
  }
  cout<<setprecision(6)<<s1;
}

#include"iostream"
using namespace std;
#define ll long long
ll a,b,ssh;
int main(){
  cin>>a>>b;
  a+=(a&1);b-=(b&1);
  ssh=(b-a)/2+1;
  cout<<(a+b)*ssh/2;
}
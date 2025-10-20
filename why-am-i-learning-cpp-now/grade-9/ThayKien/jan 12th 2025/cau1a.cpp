#include"iostream"
using namespace std;
#define ll long long
ll a,b,a1=0,b1=0;
void compa(){
  while(a!=0){a1=a1*10+a%10;a/=10;}
  while(b!=0){b1=b1*10+b%10;b/=10;}
  (a1>b1)?cout<<a1:cout<<b1;
}
int main(){
  cin>>a>>b;
  compa();
}
#include"iostream"
#include"string"
#define ll long long
using namespace std;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
string s;
ll a,b;
int main(){
  cin>>s;
  for(char d:s){
    if((d-'0')%2==0){b=b*10+(d-'0');}
    a=a*10+(d-'0');
  }
  cout<<gcd(a,b);
}
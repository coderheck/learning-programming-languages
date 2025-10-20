#include"iostream"
#include"string"
using namespace std;
#define ll long long
string s;unsigned ll t=0;
int main(){
  cin>>s;
  for(char c:s){
    ll curDigit=c-'0';
    t=t+(curDigit*curDigit);
  }
  cout<<t;
}
#include"iostream"
#include"string"
using namespace std;
#define ll long long
int getLastDigit(string s){
  return s[s.size()-1]-'0';
}
string s;ll n,lastDigitSum=0;
int main(){
  cin>>n;
  for(ll i=1;i<=n;i++){
    cin>>s;
    lastDigitSum+=getLastDigit(s);
  }
  cout<<lastDigitSum;
}

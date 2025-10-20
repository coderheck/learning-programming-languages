#include"iostream"
#include"string"
#include"algorithm"
using namespace std;
string n;
int main(){
  cin>>n;
  string n1(n);
  reverse(n1.begin(),n1.end());
  if(n1==n){cout<<"YES";}else{cout<<"NO";}
}
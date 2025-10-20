#include"iostream"
#include"string"
using namespace std;
#define ll long long
string palin(string s,ll i,ll j){
  while(i<j){
    if(s[i]!=s[j]){return"No";}
    i++;j--;
  }
  return"Yes";
}
int main(){
  string s;cin>>s;cout<<palin(s,0,s.length()-1);
}
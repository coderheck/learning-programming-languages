#include"iostream"
#include"string"
#include"algorithm"
using namespace std;
string s;
int main(){
  getline(cin,s);
  reverse(s.begin(),s.end());
  for(unsigned long long i=0;i<s.size();i++){
    cout<<s[i];
  }
}
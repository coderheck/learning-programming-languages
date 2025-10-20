#include"iostream"
#include"string"
#include"sstream"
#include"climits"
#include"vector"
using namespace std;
int CharToInt(char c){
  return (int)c-'0';
}
vector<int>a(250); int iter=0;
int main(){
  int k;string s;cin>>k>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]>='0' && s[i]<='9'){a[iter]=CharToInt(s[i]);iter++;}
  }
  int d=0;
  while(d<k){
    vector<int>b(k-d);
  }
}
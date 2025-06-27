#include"iostream"
#include"string"
#include"map"
using namespace std;
int n;string s,res="";
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    map<char,int>m;
    cin>>s;
    for(auto c:s){m[c]++;}
    for(auto c:m){if(c.second==1){res+=c.first;break;}}
  }
  cout<<res;
}
#include"iostream"
#include"string"
using namespace std;
#define ll long long
int n;string s;ll res=0;
int main(){
  cin>>n;
  while(n--){
    cin>>s;
    for(int i=0;i<s.size();++i){res+=s[i]-'0';}
  }
  cout<<res;
}
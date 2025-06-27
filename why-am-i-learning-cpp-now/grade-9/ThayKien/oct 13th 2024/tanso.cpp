#include"iostream"
#include"string"
using namespace std;
string s;int k,res=0;int cnt[256];
int main(){
  cin>>k>>s;
  for(auto i:s){cnt[i]++;}
  for(int i='a';i<='z';i++){
    if(s[i]>k){res++;}
  }
  cout<<res;
}
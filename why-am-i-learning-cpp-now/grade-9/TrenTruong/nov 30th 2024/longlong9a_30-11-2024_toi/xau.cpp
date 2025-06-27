#include"iostream"
#include"string"
using namespace std;
string s;int cnt[256];
int main(){
  cin>>s;
  for(int i=0;i<s.size();i++){cnt[s[i]]++;}
  for(int i='A';i<='Z';i++){
    if(cnt[i]==0){
      cout<<(char)i;
    }
  }
}
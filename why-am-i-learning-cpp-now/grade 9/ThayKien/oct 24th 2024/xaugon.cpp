#include"iostream"
#include"string"
#include"cstdint"
using namespace std;
using u64 = uint64_t;
string s;
void parse(){
  for(u64 i=0;i<s.size();i++){
    while(s[i]==s[i+1]){
      s.erase(i,1);
    }
  }
  cout<<s;
}
int main(){
  cin>>s;
  parse();
}
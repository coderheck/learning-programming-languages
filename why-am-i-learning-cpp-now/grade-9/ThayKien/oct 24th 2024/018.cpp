#include"iostream"
#include"string"
#include"cstdint"
using namespace std;
using u64=uint64_t;
string s;u64 t=0;
void parse(){
  for(u64 i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      u64 c=s[i]-'0';
      while(s[i+1]>='0'&&s[i+1]<='9'){c*=10;c+=s[i+1]-'0';i++;}
      t+=c;
    }
  }
  cout<<t;
}
int main(){
  cin>>s;parse();
}
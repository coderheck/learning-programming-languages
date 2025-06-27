#include"iostream"
#include"string"
using namespace std;
string s,res;
void parse(){
  for(int i=0;i<s.size();i++){
    char c=s[i];int cc=0;
    while(s[i+1]>='0'&&s[i+1]<='9'){
      i++;
      cc=cc*10+(s[i]-'0');
    }
    if(cc==0){cc=1;}
    while(cc--){res+=c;}
  }
  cout<<res;
}
int main(){
  cin>>s;
  parse();
}
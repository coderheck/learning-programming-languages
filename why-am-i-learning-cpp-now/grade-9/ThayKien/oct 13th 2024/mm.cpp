#include"iostream"
#include"string"
#include"map"
using namespace std;
string s;map<int,int>m;
void parse(){
  for(long long i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      int cur=s[i]-'0';
      while(s[i+1]>='0'&&s[i+1]<='9'){
        cur*=10;cur+=s[i+1]-'0';
        i++;
      }
      m[cur]++;
    }
  }
  cout<<m.size();
}
int main(){
  cin>>s;parse();
}
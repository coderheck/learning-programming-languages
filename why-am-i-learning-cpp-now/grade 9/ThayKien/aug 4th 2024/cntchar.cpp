#include"iostream"
#include"string"
using namespace std;
int cnt[200];string s;
int main(){
  cin>>s;
  for(int i=0;i<s.size();i++){
    int charCode=s[i];
    cnt[charCode]++;
  }
  for(int i='a';i<='z';i++){
    if(cnt[i]>0){cout<<(char)i<<":"<<cnt[i]<<"\n";}
  }
}

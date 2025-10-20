#include"iostream"
#include"string"
#include"map"
using namespace std;
string s1,s2;
map<char,int>cnt1,cnt2;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  getline(cin,s1);
  getline(cin,s2);
  for(char c:s1){cnt1[c]++;}
  for(char c:s2){cnt2[c]++;}
  for(char i='a';i<='z';i++){
    if(cnt1[i]>0&&cnt2[i]>0){cout<<(char)i<<"\n";}
  }
}

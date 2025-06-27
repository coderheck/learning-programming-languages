#include"iostream"
#include"string"
#include"unordered_map"
using namespace std;
int n;string s;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  while(n--){
    unordered_map<char,int>cnt;
    cnt.reserve(255);
    cin>>s;
    for(int i=0;i<s.size();i++){cnt[s[i]]++;}
    for(char i='A';i<='Z';i++){if(cnt[i]==1){cout<<i;break;}}
  }
}
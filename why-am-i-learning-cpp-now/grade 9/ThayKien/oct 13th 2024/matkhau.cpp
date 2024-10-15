#include"iostream"
#include"string"
using namespace std;
int n;string s,res="";
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>s;int cnt[256];
    for(auto i:s){cnt[i]++;}
    for(int j='A';j<='Z';j++){
      if(cnt[j]==1){res+=j;break;}
    }
  }
  cout<<res;
}
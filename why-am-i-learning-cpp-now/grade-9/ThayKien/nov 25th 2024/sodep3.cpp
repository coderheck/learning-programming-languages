#include"iostream"
#include"string"
using namespace std;
string s;int sum=0;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin>>s;
  for(char d:s){sum+=d-'0';}
  cout<<!(sum%s.size());
}
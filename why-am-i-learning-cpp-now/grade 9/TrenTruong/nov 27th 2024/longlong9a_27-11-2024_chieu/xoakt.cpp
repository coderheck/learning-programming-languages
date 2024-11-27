#include"iostream"
#include"string"
using namespace std;
int n,k;
bool ispl(string s){
  int l=0,r=s.size()-1;
  while(l<r){
    if(s[l]!=s[r]){
      return false;
    }
    l++;r--;
  }
  return true;
}
string s;
void parse(){
  for(int l=0;l<=k;l++){
    int r=k-l;
    if(r>n||l>n){continue;}
    string tmp=s.substr(l,n-l-r);
    if(ispl(tmp)){cout<<tmp;return;}
  }
  cout<<"No";
}
int main(){
  cin>>n>>k;
  cin>>s;
  parse();
}
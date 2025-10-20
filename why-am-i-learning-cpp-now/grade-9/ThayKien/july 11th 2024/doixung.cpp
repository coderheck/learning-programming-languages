#include"iostream"
#include"algorithm"
#include"string"
#include"vector"
using namespace std;
int main(){
  int n;cin>>n;vector<string>res;
  while(n--){
    string a,b;cin>>a;b=a;
    reverse(a.begin(),a.end());
    if(a==b){res.push_back(b);}
  }
  for(int i=0;i<res.size();i++){cout<<res[i]<<" ";}
}
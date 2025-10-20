#include"iostream"
#include"string"
#include"algorithm"
using namespace std;
int n,k;string s;
string ass(string a,string b){
  if(b.size()>a.size()){
    return b;
  }
}
int main(){
  cin>>n>>k;cin>>s;
  string a[k+1];
  sort(s.begin(),s.end());
  for(int i=1;i<=k;i++){a[i]+=s[i];}
  for(int i=k;i<n;i++){
    for(int j=1;j<=k;j++){
      if(a[j].back()!=s[i]||a[j].empty()){
        a[j]+=s[i];
      }
    }
    for(int j=1;j<=k;j++){
      bool nah=false;
      for(int z=a[0].size();z<a[j].size();z++){
        a[0]+=a[j][z];
      }
      a[j].erase();
    }
  }
  // sort(a,a+k);
  cout<<a[0];
}
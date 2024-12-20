#include"iostream"
#include"string"
using namespace std;
string s;char c;long long n;
int main(){
  getline(cin,s);
  cin>>c;
  n=s.size();
  for(long long i=0;i<n;i++){
    if(s[i]==c){s.erase(i,1);i--;n--;}
  }
  cout<<s;
}
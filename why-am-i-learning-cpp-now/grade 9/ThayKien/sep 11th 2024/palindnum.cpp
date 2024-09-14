#include"string"
#include"iostream"
using namespace std;
string s;
void KBC(){
  long long n=s.size();
  for(long long i=0;i<n;i++){
    if(s[i]!=s[n-i-1]){cout<<"NO";return;}
  }
  cout<<"YES";return;
}
int main(){
  cin>>s;KBC();
}
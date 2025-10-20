#include"iostream"
#include"string"
#include"algorithm"
#define ll long long
using namespace std;
int main(){
  ll k;string q;cin>>k>>q;
  reverse(q.begin(),q.end());
  cout<<q.substr(q.size()-k)<<q.substr(0,(k-q.size())*-1);
}

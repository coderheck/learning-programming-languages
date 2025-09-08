#include <iostream>
#include <stack>
using namespace std;
#define ll long long 
ll t,n;stack<int>st;
int main(){
  cin.tie(nullptr)->sync_with_stdio(0);
  cin>>t;
  while(t--){
    cin>>n;
    while(n){st.push(n&1);n>>=1;}
    while(!st.empty()){cout<<st.top();st.pop();}
    cout<<"\n";
  }
}

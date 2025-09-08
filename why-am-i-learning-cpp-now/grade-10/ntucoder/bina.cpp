#include <iostream>
#include <stack>
using namespace std;
#define ll long long 
ll n;stack<ll>st;
int main(){
  cin>>n;
  if(!n){cout<<n;}
  while(n){
    st.push(n&1);
    n>>=1;
  }
  while(!st.empty()){
    cout<<st.top();st.pop();
  }
}

#include"iostream"
#include"stack"
using namespace std;
#define ll long long
stack<int>st;int n,op;ll x;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  while(n--){
    cin>>op;
    if(op==1){cin>>x;st.push(x);}
    if(op==2){
      if(st.size()<1){
        cout<<-1<<"\n";
      }else{cout<<st.top()<<"\n";st.pop();}
    }
    if(op==3){
      if(st.size()<1){
        cout<<-1<<"\n";
      }else{cout<<st.top()<<"\n";}
    }
  }
  while(!st.empty()){cout<<st.top()<<" ";st.pop();}
}
#include"iostream"
#include"string"
using namespace std;
string a,b;int n;
void proc(){
  for(int i=0;i<n;i++){
    char sa=tolower(a[i]),sb=tolower(b[i]);
    if(sa<sb){
      cout<<-1;return;
    }else if(sa>sb){
      cout<<1;return;
    }
  }
  cout<<0;
}
int main(){
  cin>>a>>b;
  n=a.size();
  proc();
}
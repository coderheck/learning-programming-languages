#include"iostream"
#include"vector"
using namespace std;
vector<int>kien(100,0);
int n,k;
void parse(){
  for(int i=1;i<=n;i++){
    k+=kien[i];
    if(k<=0){cout<<i;return;}
  }
  cout<<-1;
}
int main(){
  cin>>n>>k;
  for(int i=1;i<=n;i++){cin>>kien[i];}
  for(int i=1;i<=n;i++){int a;cin>>a;kien[i]-=a;}
  parse();
}

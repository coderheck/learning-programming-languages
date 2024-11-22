#include"iostream"
using namespace std;
#define ll long long
ll m,plan2=0,base=1;int n;
int main(){
  cin>>m>>n;
  for(int i=1;i<=n;i++){
    plan2+=base;base*=2;
  }
  cout<<(m>plan2)?1:2;
}
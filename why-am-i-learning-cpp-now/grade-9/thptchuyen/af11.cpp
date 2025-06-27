#include"iostream"
using namespace std;
int n;long long a,t=0;
void cum(){
  for(int i=1;i<=n;i++){
    cin>>a;
    while(a!=0){t+=(a%10);a/=10;}
  }
  cout<<t;
}
int main(){
  cin>>n;cum();
}

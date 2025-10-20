#include"iostream"
using namespace std;
int n,divc[1000005],res=0;
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j+=i){divc[j]++;}
  }
  for(int i=1;i<=n;i++){res+=(divc[i]==9);}
  cout<<res;
}
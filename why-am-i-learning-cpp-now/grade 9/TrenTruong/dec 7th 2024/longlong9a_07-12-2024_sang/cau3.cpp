#include"iostream"
#include"cmath"
using namespace std;
#define maxN 1000000
int SecureContainProtect[maxN+5];
void preproc(){
  SecureContainProtect[0]=0;
  for(int i=1;i*i<=maxN;i++){
    SecureContainProtect[i*i]=1;
  }
}
int n,a;
int main(){
  preproc();
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    if(SecureContainProtect[a]==1){
      SecureContainProtect[a]=2;
    }
  }
  for(int i=1;i<=maxN;i++){
    if(SecureContainProtect[i]==1){cout<<i;exit(0);}
  }
}
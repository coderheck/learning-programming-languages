#include"iostream"
using namespace std;
#define ll long long
ll n,res=0;
void demuoc(){
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      res+=1+(i!=n/i);
    }
  }
  cout<<res;
}
int main(){
  cin>>n;
  demuoc();
}
#include"iostream"
using namespace std;
void legendre(int n,int p){
  int c=0;
  while(n){n/=p;c+=n;}
  cout<<c<<"\n";
}
int t,n,p;
int main(){
  cin>>t;
  while(t--){
    cin>>n>>p;
    legendre(n,p);
  }
}
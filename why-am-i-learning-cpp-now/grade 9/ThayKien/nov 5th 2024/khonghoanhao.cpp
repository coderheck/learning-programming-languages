#include"iostream"
using namespace std;
int a,b;
bool imperfect(int n){
  int r=1;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      r+=i;
      if(i!=n/i){r+=n/i;}
    }
  }
  return(r>n);
}
void compute(){
  int res=0;
  for(int i=a;i<=b;i++){
    res+=imperfect(i);
  }
  cout<<res;
}
int main(){
  cin>>a>>b;
  compute();
}
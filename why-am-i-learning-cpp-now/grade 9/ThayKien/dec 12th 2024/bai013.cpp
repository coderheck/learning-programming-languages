#include"iostream"
using namespace std;
int a,b,res=0;
bool palin(int x){
  int r=0,x1=x,dcount=0;
  while(x!=0){
    r=r*10+(x%10);
    x/=10;dcount++;
  }
  return(r==x1&&dcount>1);
}
int main(){
  cin>>a>>b;
  for(int i=a;i<=b;i++){
    res+=palin(i);
  }
  cout<<res;
}
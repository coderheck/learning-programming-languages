#include"iostream"
#include"string"
#include"cmath"
using namespace std;
string a,n;
void proc(){
  int la=a[a.size()-1]-'0',ln=n[n.size()-1]-'0',cycle;
  if(n=="0"){cout<<1;return;}
  if(la==0||la==1||la==5||la==6){cout<<la;return;}
  if(la==4||la==9){
    cycle=ln%2;
    if(cycle==0){cycle=2;}
    int res=(int)pow(la,cycle)%10;
    cout<<res;
    return;
  }else{
    if(n.size()>1){
      int tmp=(n[n.size()-2]-'0')*10+(n[n.size()-1]-'0');
      cycle=tmp%4;
      if(cycle==0){cycle=4;}
    }else{
      cycle=ln;
    }
    int res=(int)pow(la,cycle)%10;
    cout<<res;
  }
}
int main(){
  cin>>a>>n;
  proc();
}
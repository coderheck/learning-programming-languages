#include"iostream"
using namespace std;
bool palin(int x){
  int r=0,x1=x,dcount=0;
  while(x!=0){
    r=r*10+(x%10);
    x/=10;dcount++;
  }
  return(r==x1&&dcount>1);
}
int n,a,evenres=0,palins[1000005],palinc=0,perfectres=0;
int main(){
  cin>>n;
  while(n--){
    cin>>a;
    if(!(a&1)){evenres+=a;}
    if(palin(a)){palins[palinc++]=a;}
    if(a==6||a==28||a==496||a==8128){perfectres+=a;}
  }
  cout<<evenres<<"\n";
  for(int i=0;i<palinc;i++){cout<<palins[i]<<" ";}
  cout<<"\n"<<perfectres;
}
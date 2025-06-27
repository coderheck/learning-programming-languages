#include"iostream"
using namespace std;
void sech(int x,int y){
  for(int j=1;j<=100-y;j++){
    if(x+j==2*(y+j)){cout<<j<<"\n";return;}
  }
  cout<<-1<<"\n";
}
int main(){
  int t;cin>>t;
  for(int i=1;i<=t;i++){
    int x,y;cin>>x>>y;
    sech(x,y);
  }
}

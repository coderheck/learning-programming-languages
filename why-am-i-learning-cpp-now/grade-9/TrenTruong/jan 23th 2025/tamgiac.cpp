#include"iostream"
using namespace std;
int t,g[3];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>t;
  while(t--){
    cin>>g[0]>>g[1]>>g[2];
    if(g[0]<0||g[1]<0||g[2]<0){cout<<"0\n";continue;}
    if(g[0]+g[1]+g[2]!=180){cout<<"0\n";continue;}
    if(g[0]==90||g[1]==90||g[2]==90){
      cout<<"VUONG\n";continue;
    }else if(g[0]>90||g[1]>90||g[2]>90){
      cout<<"TU\n";continue;
    }else{cout<<"NHON\n";continue;}
  }
}
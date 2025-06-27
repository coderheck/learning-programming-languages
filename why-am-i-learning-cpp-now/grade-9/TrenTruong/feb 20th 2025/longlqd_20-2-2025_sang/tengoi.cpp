#include"iostream"
using namespace std;
int n,t=0,curL=0,res=0,resc=0;string s;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n;
  while(n--){
    cin>>s;s+='$';t=s.size();
    for(int i=0;i<t;i++){
      if(s[i]=='W'||s[i]=='A'||s[i]=='R'){s[i]='0';}else{s[i]='1';}
    }
    curL=(s[0]=='1');
    for(int i=0;i<t;i++){
      if(s[i]>=s[i-1]&&s[i]=='1'){
        curL++;
      }else{
        if(res<curL){res=curL;resc=1;}else if(res==curL){resc++;}
        curL=0;
      }
    }
  }
  cout<<res<<" "<<resc;
}
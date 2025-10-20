#include"iostream"
#include"string"
#include"map"
#include"vector"
using namespace std;
#define maxP 10000
string s;
map<int,int>prcnt;
vector<int>res;
bool pr[maxP+1];
void prSieve(){
  for(int i=2;i<=maxP;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxP;i++){
    for(int j=i*i;j<=maxP;j+=i){pr[j]=false;}
  }
}
int main(){
  prSieve();
  cin>>s;
  for(int i=0;i<s.size();i++){
    int og=i;
    if(s[i]>='1'&&s[i]<='9'){
      int cur=s[i]-'0';
      if(pr[cur]){
        if(prcnt[cur]==0){res.push_back(cur);}
        prcnt[cur]++;
      }
      while(s[i+1]>='0'&&s[i+1]<='9'){
        i++;
        cur=cur*10+(s[i]-'0');
        if(pr[cur]){
          if(prcnt[cur]==0){res.push_back(cur);}
          prcnt[cur]++;
        }
      }
      i=og;
    }
  }
  cout<<res.size()<<"\n";
  for(auto i:res){
    cout<<i<<" ";
  }
}
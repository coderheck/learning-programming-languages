#include"iostream"
#include"map"
using namespace std;
int a,n,res=0;map<int,int>cnt;
int max(int a,int b){return(a>b)?a:b;}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a;cnt[a]++;}
  for(auto i:cnt){
    res=max(res,i.second);
  }
  cout<<res;
}
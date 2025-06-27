#include"iostream"
#include"map"
using namespace std;
int n,a[200005],val=-1;
map<int,int>cnt;
void parseOccurence(){
  for(auto i:cnt){
    if(i.second==1){val=i.first;break;}
  }
  if(val==-1){cout<<-1;return;}
  for(int i=0;i<n;i++){if(a[i]==val){cout<<i+1;return;}}
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];cnt[a[i]]++;}
  parseOccurence();
}
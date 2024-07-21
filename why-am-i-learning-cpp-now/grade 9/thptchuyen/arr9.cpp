#include"iostream"
#include"map"
using namespace std;
map<char,int>chmap;
int main(){
  for(int i='a';i<='z';i++){chmap[i]=0;}
  int n,maxn=0;char maxc=char(0);cin>>n;
  for(int i=1;i<=n;i++){char ch;cin>>ch;chmap[ch]++;}
  for(int i='a';i<='z';i++){
    if(chmap[i]>maxn&&i>maxc){maxn=chmap[i];maxc=i;}
  }
  cout<<maxc;
}

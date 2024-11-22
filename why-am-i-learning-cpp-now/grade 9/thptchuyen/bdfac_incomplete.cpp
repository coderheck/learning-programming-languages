#include"iostream"
#include"vector"
using namespace std;
const int maxN=1000;
int n;
vector<int>prs,ispr(maxN+1,true);
void prSieve(){
  ispr[0]=ispr[1]=false;
  for(int i=2;i*i<=maxN;i++){
    if(ispr[i]){
      prs.push_back(i);
      for(int j=i*i;j<=maxN;j+=i){ispr[j]=false;}
    }
  }
}
int countExp(int n1,int p){
  int c=0;
  while(n1>0){n1/=p;c+=n1;}
  return c;
}
void compute(){
  for(int pr:prs){
    if(pr>n){break;}
    int c=countExp(n,pr);
    if(c>0){cout<<c;}
  }
  cout<<"\n";
}
int main(){
  prSieve();
  cin>>n;
  compute();
}
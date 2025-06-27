#include"iostream"
#include"vector"
using namespace std;
int n,hour[105],th=0,g=0;
vector<int>target;
int check(int g,int t){
  int curS=0;
  g=0;
  for(int i=0;i<n;i++){
    curS+=hour[i];
    if(curS==t){g++;curS=0;}else if(curS>t){return -1;}
  }
  if(curS==0){return g;}else{return -1;}
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>hour[i];th+=hour[i];}
  for(int i=1;i<=th;i++){
    if(th%i==0){target.push_back(i);}
  }
  for(int l:target){
    int g=check(g,l);
    if(g!=-1){
      int curS=0;
      cout<<g<<" "<<l<<"\n";
      for(int i=0;i<n;i++){
        curS+=hour[i];
        cout<<hour[i]<<" ";
        if(curS==l){cout<<"\n";curS=0;}
      }
      exit(0);
    }
  }
}
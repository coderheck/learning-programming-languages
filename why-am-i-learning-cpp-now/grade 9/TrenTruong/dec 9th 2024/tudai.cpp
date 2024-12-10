#include"iostream"
#include"string"
#include"sstream"
using namespace std;
string arg,res="";int maxs=0;
void proc(){
  for(char &d:arg){
    if(d=='_'){d=' ';}
  }
  stringstream ss(arg);string s;
  while(ss>>s){
    int n=s.size();
    if(n>=maxs){
      maxs=n;res=s;
    }
  }
  cout<<maxs<<"\n"<<res;
}
int main(){
  getline(cin,arg);
  proc();
}
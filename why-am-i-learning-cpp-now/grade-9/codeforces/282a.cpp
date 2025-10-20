#include"iostream"
#include"string"
using namespace std;
int n,x=0;
string arg,got;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin>>n;
  while(n--){
    cin>>arg;got="";
    for(int i=0;i<arg.size();i++){
      if(arg[i]=='-'||arg[i]=='+'){got+=arg[i];}
    }
    if(got=="++"){x++;}else{x--;}
  }
  cout<<x;
}
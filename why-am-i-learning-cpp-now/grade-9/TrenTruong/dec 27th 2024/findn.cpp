#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
#define ll long long
int t,n;vector<ll>res;
void preproc(ll arg){
  if(arg>0){res.push_back(arg);}
  if(arg>5e8){return;}
  preproc(arg*10+4);
  preproc(arg*10+7);
}
int main(){
  preproc(0);
  sort(res.begin(), res.end());
  cin>>t;
  while(t--){
    cin>>n;
    cout<<res[n-1]<<"\n";
  }
}
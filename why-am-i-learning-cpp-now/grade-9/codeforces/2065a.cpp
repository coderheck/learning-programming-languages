#include"iostream"
#include"string"
using namespace std;
int t;string w;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>t;
  while(t--){
    cin>>w;
    if(w[w.size()-2]=='u'&&w[w.size()-1]=='s'){
      w.erase(w.size()-2,2);w+='i';
    }
    cout<<w<<"\n";
  }
}
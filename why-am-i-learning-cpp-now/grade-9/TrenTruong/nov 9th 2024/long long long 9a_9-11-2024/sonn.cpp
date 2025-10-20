#include"iostream"
#include"string"
using namespace std;
#define ll long long
int n,c=10;string m="19";
void spawnNum(){
  if(n<10){cout<<n;return;}
  while(c<n){
    c++;m[0]++;
    if(m[0]==m[1]){
      m[0]--;
      m.insert(m.begin(),'1');
    }
  }
  cout<<m;
}
int main(){
  if(fopen("sonn.inp","r")){
    freopen("sonn.inp","r",stdin);
    freopen("sonn.out","w",stdout);
  }
  cin>>n;
  spawnNum();
}
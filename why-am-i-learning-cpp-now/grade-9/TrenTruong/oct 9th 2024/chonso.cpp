#include"iostream"
#include"string"
using namespace std;
int n;string s;int dem[2];
int main(){
  if(fopen("chonso.inp","r")){
    freopen("chonso.inp","r",stdin);
    freopen("chonso.out","w",stdout);
  }
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>s;
    dem[s[s.size()-1]%2]++;
  }
  (dem[1]%2==1)
  ?
    cout<<(dem[0]*dem[1])+dem[1]
  :
    cout<<(dem[1]-1)*dem[1]/2+(dem[0]+1)*dem[0]/2;
}

#include"iostream"
#include"string"
using namespace std;
#define ll long long
int t;string s;
void parsePassword(){
  if(s.size()<8){cout<<"No\n";return;}
  bool hasNum=false,hasLower=false,hasUpper=false,hasSpecial=false;
  for(int i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){hasNum=true;}else
    if(s[i]>='a'&&s[i]<='z'){hasLower=true;}else
    if(s[i]>='A'&&s[i]<='Z'){hasUpper=true;}else
    {hasSpecial=true;}
  }
  (hasNum&&hasLower&&hasUpper&&hasSpecial)?cout<<"Yes\n":cout<<"No\n";
}
int main(){
  if(fopen("cau4b.inp","r")){
    freopen("cau4b.inp","r",stdin);
    freopen("cau4b.out","w",stdout);
  }
  cin>>t;
  for(int i=1;i<=t;i++){
    cin>>s;
    parsePassword();
  }
}
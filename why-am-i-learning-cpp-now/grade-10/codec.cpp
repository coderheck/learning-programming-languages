#include"iostream"
#include"string"
#include"cstring"
using namespace std;
string s;
void enc(){
  while(s[s.size()-1]==' '){s.erase(s.size()-1,1);}
  for(int i=0;i<s.size();i++){
    s[i]=s[i]+'l'-'o'+'n'-'g';
  }
  cout<<s<<"\n";
}
void dec(){
  for(int i=0;i<s.size();i++){
    s[i]=s[i]-'l'+'o'-'n'+'g';
  }
  cout<<s<<"\n";
}
int main(int argc,char *argv[]){
  if(argc==1){
    cout<<"specify processing mode (\"--encode\" or \"--decode\")";
    return 0;
  }else if(argc==2){
    if(strcmp(argv[1],"--encode")==0){
      freopen("codec.inp","r",stdin);
      freopen("codec.out","w",stdout);
      while(getline(cin,s)){
        enc();
      }
    }else if(strcmp(argv[1],"--decode")==0){
      freopen("codec.inp","r",stdin);
      freopen("codec.out","w",stdout);
      while(getline(cin,s)){
        dec();
      }
    }else{
      cout<<"invalid flag";
    }
  }else{
    cout<<"too many arguments";
  }
}

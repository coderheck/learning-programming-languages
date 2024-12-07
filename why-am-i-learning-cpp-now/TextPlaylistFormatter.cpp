#include"iostream"
#include"string"
using namespace std;
#define ll long long
string cur;
void parse(){
  bool albumBracketsFound=false;
  for(int i=0;i<cur.size();i++){
    if(cur[i]=='['&&!albumBracketsFound){
      int og=i;
      cur.erase(i,1);
      while(cur[i]!=']'){
        if(cur[i]=='['){
          while(cur[i]!=']'){i++;}
        }
        i++;
      }
      cur[i]=' ';
      i=og;
      albumBracketsFound=true;
    }else if(cur[i]=='#'){
      cur[i]='-';i++;
      cur.insert(cur.begin()+i,' ');
      i++;
      while(cur[i]>='0'&&cur[i]<='9'){
        i++;
      }
      cur[i]='.';
    }
  }
  cout<<cur<<"\n";
}
int main(){
  freopen("tpf.inp","r",stdin);
  freopen("tpf.out","w",stdout);
  while(getline(cin,cur)){
    parse();
  }
}
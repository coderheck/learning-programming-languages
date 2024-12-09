#include"iostream"
#include"algorithm"
using namespace std;
#define maxN 1000
struct mane{int c,co=0;}a[260];
bool cmpfn(const mane &a,const mane &b){
  if(a.co==b.co){
    return(a.c<b.c);
  }else{
    return(a.co>b.co);
  }
}
string s;
void parse(){
  for(char c:s){a[c].co++;}
  sort(a,a+255,cmpfn);
  cout<<(char)a[0].c<<"\n"<<a[0].co;
}
int main(){
  for(int i=1;i<=255;i++){a[i].c=i;}
  cin>>s;
  parse();
}
#include"iostream"
#include"map"
using namespace std;
string sa,sb;
map<char,int>a,b;
bool nice=false;
int main(){
  cin>>sa>>sb;
  for(int i=0;i<sa.size();i++){a[sa[i]-'0']++;}
  for(int i=0;i<sb.size();i++){b[sb[i]-'0']++;}
  for(int i=0;i<=9;i++){if(a[i]>0&&b[i]>0){nice=true;cout<<i<<" ";}}
  if(!nice){cout<<-1;}
}
#include"iostream"
#include"string"
using namespace std;
string palin(string s,int i,int j){
  int i2=i+1,j2=j-1;
  if(j-i+1==1){return"YES\n";}
  while(i<j){
    if(s[i]!=s[j]){return"NO\n";break;}
    i+=2;j-=2;
  }
  while(i2<j2){
    if(s[i2]!=s[j2]){return"NO\n";break;}
    i2+=2;j2-=2;
  }
  return"YES\n";
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s;int n,len;cin>>len>>s>>n;
  for(int a=1;a<=n;a++){
    int i,j;cin>>i>>j;
    i--;j--;
    cout<<palin(s,i,j);
  }
}
// abccbabccdcdcd 5 1 6 5 7 8 12 4 9 10 14
// YES
// YES
// NO
// NO
// YES

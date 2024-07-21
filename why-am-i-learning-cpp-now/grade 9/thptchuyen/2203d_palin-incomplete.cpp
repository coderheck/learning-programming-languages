#include"iostream"
#include"string"
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s;int q;cin>>s>>q;
  for(int n=1;n<=q;n++){
    int i,j;cin>>i>>j;
    string res("YES\n");
    i--;j--;
    while(i<j){
      if(s[i]!=s[j]){res="NO\n";break;}
      i++;j--;
    }
    cout<<res;
  }
}
// abccbabccdcdcd 5 1 6 5 7 8 12 4 9 10 14
// YES
// YES
// NO
// NO
// YES

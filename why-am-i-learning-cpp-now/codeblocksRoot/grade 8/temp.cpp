#include"iostream"
#define ll long long
using namespace std;
int main(){
  ll c=1,r=1;bool f=false;
  for(ll i=1;;i++){
    for(ll o=1;o<=i;o++){
      cout<<c<<" ";
      if(c==2024){r=i;f=true;break;}
      c++;
    }
    cout<<"\n";
    if(f){break;}
  }
  cout<<r;
}

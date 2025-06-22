#include<iostream>
using namespace std;
#define ll long long
ll s1,v1,s2,v2;
int main(){
  cin>>s1>>v1>>s2>>v2;
  if((v1>v2&&s1<s2)||(v1<v2&&s1>s2)){
    cout<<(ll)(1.0*abs(s1-s2)/abs(v1-v2));
  }else{
    cout<<-1;
  }
}

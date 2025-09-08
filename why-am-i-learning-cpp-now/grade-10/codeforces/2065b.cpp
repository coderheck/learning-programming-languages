#include<iostream>
#include<string>
#define ll long long 
ll t,n;std::string s;
int main(){
  std::cin.tie(0)->sync_with_stdio(0);
  std::cin>>t;
  while(t--){
    std::cin>>s;
    for(ll i=s.size()-2;i>=0;i--){
      if(s[i]==s[i+1]){
        s.erase(i,1);
        if(i-1>=0){s[i]=s[i-1];}
      }
    }
    std::cout<<s.size()<<"\n";
  }
}

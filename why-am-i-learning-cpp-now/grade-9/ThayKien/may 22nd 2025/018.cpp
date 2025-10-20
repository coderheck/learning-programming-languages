#include<iostream>
#include<string>
#define ll long long
std::string s;ll res=0,tmp=0;
int main(){
  std::cin>>s;
  for(ll i=0;i<s.size();i++){
    if(s[i]>='0'&&s[i]<='9'){
      tmp=tmp*10+s[i]-'0';
    }else{
      res+=tmp;tmp=0;
    }
  }
  res+=tmp;
  std::cout<<res;
}

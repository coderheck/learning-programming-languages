#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
struct strpos{string str;ll pos;};
ll maxL=0;string s,res="",word;vector<strpos>words;
int main(){
  getline(cin,s);
  for(ll i=0;i<s.size();i++){
    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
      strpos cur;cur.pos=i+1;
      word.push_back(s[i]);
      while((s[i+1]>='a'&&s[i+1]<='z')||(s[i+1]>='A'&&s[i+1]<='Z')){
        word.push_back(s[i+1]);
        i++;
      }
      if(maxL<word.size()){maxL=word.size();}
      reverse(word.begin(),word.end());
      res+=word;cur.str=word;
      words.push_back(cur);
      word="";
    }else{
      res+=s[i];
    }
  }
  cout<<res<<"\n";
  for(ll i=0;i<words.size();i++){
    if(words[i].str.size()==maxL){
      cout<<words[i].str<<" "<<words[i].pos<<"\n";
    }
  }
}
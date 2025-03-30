#include<iostream>
#include<map>
using namespace std;
int n,a;map<int,int>cnt;
int main(){
  cin>>n;
  while(n--){cin>>a;cnt[a]++;}
  for(map<int,int>::iterator it=cnt.begin();it!=cnt.end();it++){
    cout<<it->first<<":"<<it->second<<"\n";
  }
}
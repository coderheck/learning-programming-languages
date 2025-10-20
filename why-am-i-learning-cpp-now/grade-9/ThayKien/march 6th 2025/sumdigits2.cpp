#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int k;vector<string>res;
#define ll long long
void spawn(string s,const ll &sum){
  if(sum>10||res.size()>=1000000){
    return;
  }else{
    if(sum+0<=10){res.push_back(s);spawn(s+'0',sum+0);}
    if(sum+1<=10){res.push_back(s);spawn(s+'1',sum+1);}
    if(sum+2<=10){res.push_back(s);spawn(s+'2',sum+2);}
    if(sum+3<=10){res.push_back(s);spawn(s+'3',sum+3);}
    if(sum+4<=10){res.push_back(s);spawn(s+'4',sum+4);}
    if(sum+5<=10){res.push_back(s);spawn(s+'5',sum+5);}
    if(sum+6<=10){res.push_back(s);spawn(s+'6',sum+6);}
    if(sum+7<=10){res.push_back(s);spawn(s+'7',sum+7);}
    if(sum+8<=10){res.push_back(s);spawn(s+'8',sum+8);}
    if(sum+9<=10){res.push_back(s);spawn(s+'9',sum+9);}
  }
}
int main(){
  spawn("9",9);
  spawn("8",8);
  spawn("7",7);
  spawn("6",6);
  spawn("5",5);
  spawn("4",4);
  spawn("3",3);
  spawn("2",2);
  spawn("1",1);
  sort(res.begin(),res.end());
  cin>>k;
  cout<<res[k-1];
  sqrtl()
}
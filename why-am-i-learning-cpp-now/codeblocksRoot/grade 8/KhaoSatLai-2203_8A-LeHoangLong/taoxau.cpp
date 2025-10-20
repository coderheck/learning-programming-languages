#include"bits/stdc++.h"
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    if(fopen("taoxau.inp","r")){
        freopen("taoxau.inp","r",stdin);
        freopen("taoxau.out","w",stdout);
    }
    string str,res; getline(cin,str);
    if(str.size()%2==0){
        for(ll i=str.size()-1;i>0;i-=2){
            res.insert(res.end(),str[i]);
        }
        for(ll i=0;i<str.size();i+=2){
            res.insert(res.end(),str[i]);
        }
    }else{
        for(ll i=str.size()-1;i>=0;i-=2){
            res.insert(res.end(),str[i]);
        }
        for(ll i=1;i<str.size();i+=2){
            res.insert(res.end(),str[i]);
        }
    }
    cout<<res;
}

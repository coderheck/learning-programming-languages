#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
#define tname "icpc25_mt_d"
#define ll long long
#define umap unordered_map
string s;
umap<string,string>cnt1,cnt2;
vector<vector<string>>ss(10);
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cnt1["1"] = "one";cnt1["2"] = "two";cnt1["3"] = "three";cnt1["4"] = "four";cnt1["5"] = "five";cnt1["6"] = "six";cnt1["7"] = "seven";cnt1["8"] = "eight";cnt1["9"] = "nine";cnt1["10"] = "ten";cnt1["11"] = "eleven";cnt1["12"] = "twelve";cnt1["13"] = "thirteen";cnt1["14"] = "fourteen";cnt1["15"] = "fifteen";
    cnt1["16"] = "sixteen";cnt1["17"] = "seventeen";cnt1["18"] = "eighteen";cnt1["19"] = "nineteen";cnt1["20"] = "twenty";
    for(umap<string,string>::iterator i=cnt1.begin();i!=cnt1.end();i++){
        cnt2.insert({i->second,i->first}); // build bảng ngược
        ss[i->second.size()].push_back(i->second); // build bảng theo độ dài
    }
    cin>>s;
    if(cnt1.find(s)!=cnt1.end()){
        cout<<cnt1[s];
        return 0;
    }else if(cnt2.find(s)!=cnt2.end()){
        cout<<cnt2[s];
        return 0;
    }else{
        for(const string &check:ss[s.size()]){
            ll diff=0;
            for(ll i=0;i<s.size();i++){
                if(s[i]!=check[i]){diff++;}
            }
            if(diff<=1){cout<<cnt2[check];return 0;}
        }
    }
}
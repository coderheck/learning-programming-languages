#include"bits/stdc++.h"
#define ll long long
using namespace std;
int main(){
    if(fopen("bai4.inp","r")){
        freopen("bai4.inp","r",stdin);
        freopen("bai4.out","w",stdout);
    }
    int q;cin>>q;string s;
    for(int i=1;i<=q;i++){
        cin>>s; int pos=-1;
        for(int j=0;j<s.size();j++){
            bool yes=false;
            for(int o=0;o<s.size();o++){
                if(s[j]==s[o] && j!=o){yes=true;}
            }
            if(yes==false){pos=j+1;break;}
        }
        cout<<pos<<"\n";
    }
}

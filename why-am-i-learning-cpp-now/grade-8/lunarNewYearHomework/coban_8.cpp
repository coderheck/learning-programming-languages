#include"bits/stdc++.h"
using namespace std;
int main(){
    int s[6],HD=0,HP=0;
    for(int i=0;i<6;i++){cin>>s[i];}
    for(int i=0;i<3;i++){
        if(s[i]>s[i+3]){HD+=1;}
        if(s[i]<s[i+3]){HP+=1;}
    }
    cout<<HD<<" "<<HP;
}
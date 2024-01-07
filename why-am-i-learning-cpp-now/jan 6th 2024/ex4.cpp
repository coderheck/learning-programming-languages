#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;getline(cin,s);
    for(int i=s.length();i>=0;i--){
        if(s[i]==' '){s[i]='\r';}else break;
    }
    for(int i=0;i<=s.length();i++){
        if(s[i]==' '){s[i]='\r';}else break;
    }
    for(int i=0;i<=s.length();i++){
        if(s[i]==' '&&s[i]==s[i+1]){
            for(int j=i;j<=s.length();j++){
                s[j] = s[j+1];
            }
            s[s.length()-1]='\r';
            i--;
        }
    }
    s[0]=toupper(s[0]);
    cout<<s<<"\n"<<s.length();
}
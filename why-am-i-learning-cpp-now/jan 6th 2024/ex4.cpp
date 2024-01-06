#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="lol      hi  WHAT   THE          FUCK    BITCH";
    for(int i=s.length();i>=0;i--){
        if(s[i]==' '){s[i]='\r';}else break;
    }
    for(int i=0;i<=s.length();i++){
        if(s[i]==' '){s[i]='\r';}else break;
    }
    for(int i=0;i<=s.length();i++){
        if(s[i]==' '&&s[i]==s[i+1]){
            for(int j=i;j<=s.length();j++){s[j] = s[j+1];}
            s[s.length()-1]='\r';
            i--;
        }
    }
    int max=0;
    for(int i=0;i<=s.length();i++){
        if(s[i]!=' '){
            int demkitu=0;
            for(int j=i;j<=s.length();j++){
                if(s[j]==' '){demkitu--;break;}else{demkitu++;cout<<s[j];}
            }
            if(max<demkitu){max=demkitu;}
        }
        cout<<"\n";
    }
    cout<<"\n"<<max<<"\n";
    s[0]=toupper(s[0]);
    cout<<s<<"\n"<<s.length();
}
#include"string"
#include"iostream"
#include"stdio.h"
#include"algorithm"
using namespace std;
int main(){
    freopen("sortingStrings.inp","r",stdin);
    freopen("sortingStrings.out","w",stdout);
    string str; getline(cin,str);
    sort(str.begin(),str.end());
    for(int i=0;i<str.length();i++){
        if(str[i]<10){cout<<str[i];}
    }
}

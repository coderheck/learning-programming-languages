#include"iostream"
using namespace std;
int main(){
    int demtu=1,demkitu=0;
    char c='c';
    while(c!='\r'){
        c=getchar();
        if(c==' '){demtu++;}else{demkitu++;}
    }
    cout<<c<<"\n"<<"so tu: "<<"\n"<<"; so ki tu: "<<demkitu-1;
}
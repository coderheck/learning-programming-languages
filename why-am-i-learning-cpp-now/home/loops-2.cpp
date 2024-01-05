#include"iostream"
using namespace std;
int main(){
    int demtu=1,demkitu=0;
    char c='c';
    while(c!='\n'){
        c=getchar();
        if(c==' '){demtu++;}else{demkitu++;}
    }
    cout<<"so tu: "<<"\n"<<"so ki tu: "<<demkitu;
}
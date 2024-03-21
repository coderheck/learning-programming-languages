#include"iostream"
#include"string"
using namespace std;
int main(){
    string str;
    while(true){
        getline(cin,str);
        int f=str.find("tan");
        if(f!=string::npos){cout<<"tan dao\n";}
    }
}

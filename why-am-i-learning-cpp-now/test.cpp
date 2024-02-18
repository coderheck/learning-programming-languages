#include"iostream"
using namespace std;
bool nguyento(int n){
    bool nt=true;
    if(n<=1){nt=false;}
    for(int i=2;i<=n/2;i++){if(n%i==0){nt=false;}}
    return nt;
}
int main(){
    int n;
    while(true){
        cin>>n;if(nguyento(n)==true){cout<<"nguyen to"<<"\n";}else if(nguyento(n)==false){cout<<"so phuc"<<"\n";}else if(nguyento(n)==0){cout<<"so 0"<<"\n";}else if(nguyento(n)==1){cout<<"so 1"<<"\n";}
    }
}
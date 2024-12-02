#include"iostream"
int fastpowmod(int a,int b,int c){
    int res=1;a%=c;
    if(a==0)return 0;
    while(b>0){
        if(b%2==1){res=(res*a)%c;}
        b/=2;a=(a*a)%c;
    }
    return res;
}
int main(){
    std::cout<<fastpowmod(3,4,5);
}
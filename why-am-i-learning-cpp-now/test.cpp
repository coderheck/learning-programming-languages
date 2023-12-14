#include"iostream"
#include"cmath"
bool isSquare(long long a){
    if (floor(sqrt(a))==sqrt(a) and ceil(sqrt(a))==sqrt(a)){return true;}else{return false;}
}
void hello1(int so1, int so2){
    std::cout<<"xinchao";
    if (isSquare(so1)==true){std::cout<<std::endl<<"nice";}
    std::cout<<std::endl<<so1+so2;
    return;
}
long long hello2(int a){
    return a*a;
}

int main(){
    int a, b, c;
    std::cin>>a>>b>>c;
    hello1(a,b);
    std::cout<<std::endl<<hello2(c);
}


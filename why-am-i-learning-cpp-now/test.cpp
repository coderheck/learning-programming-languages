#include"iostream"
#include"cmath"

bool chinhphuong(long long a){
    bool ch=true;
    float sq=std::sqrt(a);
    if(std::ceil(sq) != std::floor(sq)){ch=false;}
    return ch;
}
int main(){
    long long n;
    std::cin>>n;
    std::cout<<chinhphuong(n);
    return 0;
}
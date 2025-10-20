#include"iostream"
#include"iomanip"
#include"math.h"
#include"numbers"
constexpr long double pi(){
    return atan(1)*4;
}
int main(){
    std::cout<<std::fixed<<std::setprecision(48)<<pi();
}
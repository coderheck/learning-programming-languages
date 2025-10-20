#include <iostream>
#include <math.h>

int main(){
    float a, b;
    std::cin >> a >> b;
    if (a<b){std::cout<<a<<" "<<b;}else if(a>b){std::cout<<b<<" "<<a;}else{std::cout<<"wtf";}
    return 0;
}
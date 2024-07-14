#include <iostream>
#include <algorithm>
#include <math.h>

int main(){
    float tong, v, n;
    std::cin >> tong;
    v = std::ceil(tong/2);
    n = std::floor(tong/2);
    std::cout<<v<<" "<<n;
    return 0;
}
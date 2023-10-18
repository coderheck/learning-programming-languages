#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int x, y, z;
    cin>>x>>y>>z;
    int a[3] = {x, y, z};
    sort(a, a+3);
    for (int i = 0; i <= 3-1; i++){cout<<a[i]<<" ";}
    return 0;
}
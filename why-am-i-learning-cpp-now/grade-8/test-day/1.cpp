#include <iostream>
using namespace std;

int main() {
    long long height, base, blocksCount;
    blocksCount = 0;
    cin >> height;
    if (1 <= height <= 10000){
        for (base = 1; base <= height; base++){
            blocksCount = blocksCount + base;
        }
        cout << blocksCount;
    }else{return 0;}
    return 0;
}
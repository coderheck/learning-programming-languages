#include <iostream>
using namespace std;

int main() {
    long long a, b, num;
    num = 0;
    cin >> a >> b;
    if (1 < a < b <= 100) {
        for (int count = 1; count <= b; count++){
        if (count % 3 == 0) {
            num += 1;
        }
    }
    cout << num;
    }else{return 0;}
    return 0;
}
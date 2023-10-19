#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, digits;
    digits = 0;
    cin >> a;
    while (a >= 10){
        a = a/10;
        digits = digits + 1 + a;
    }
    cout<<digits;
    return 0;
}
#include <limits>
using namespace std;
/*int countDigits(int num) {
    if (num < 10) {
        return 1;
    }
    return 1 + countDigits(num / 10);
}
int main() {
    int num;
    cout << "Nhap mot so nguyen duong: ";
    cin >> num;
    int count = countDigits(num);
    cout << "So chu so cua "<<num<<" la " << count;
    return 0;
}*/
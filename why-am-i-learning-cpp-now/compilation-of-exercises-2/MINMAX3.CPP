#include <iostream>
#include <math.h>
using namespace std;

int findMax(){
    return 0;
}

int main(){
    float a, b, c, d, min, max;
    cin >> a >> b >> c >> d;
    min = max = a;
    float t[4] = {a, b, c, d};
    for (int i = 0; i <= 4-1; i++){
        if (min > t[i]){min=t[i];}
        if (max < t[i]){max=t[i];}
    }
    cout << "minimum: " << min << "; maximum: " << max;
}
#include <iostream>
using namespace std;

const long long MOD = 1000007;

struct Matrix {
    long long a[2][2];
    Matrix() {
        a[0][0] = 1;
        a[0][1] = 0;
        a[1][0] = 0;
        a[1][1] = 1;
    }
    Matrix(long long a00, long long a01, long long a10, long long a11) {
        a[0][0] = a00;
        a[0][1] = a01;
        a[1][0] = a10;
        a[1][1] = a11;
    }
};

Matrix multiply(Matrix A, Matrix B) {
    Matrix C(0, 0, 0, 0);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                C.a[i][j] = (C.a[i][j] + A.a[i][k] * B.a[k][j]) % MOD;
            }
        }
    }
    return C;
}

Matrix power(Matrix base, long long exp) {
    Matrix result;
    while (exp > 0) {
        if (exp & 1) {
            result = multiply(result, base);
        }
        base = multiply(base, base);
        exp >>= 1;
    }
    return result;
}

int main() {
    long long n;
    cin >> n;
    Matrix base(1, 1, 1, 0);
    Matrix T = power(base, n);
    cout << T.a[0][1] % MOD << endl;
    return 0;
}

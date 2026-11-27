#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <fstream>
#include <cassert>
using namespace std;
// tên bài
const string NAME = "tuanhoan";
// số test kiểm tra
// const int NTEST = 200;

mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());
#define rand rd

// Viết lại hàm random để sử dụng cho thuận tiện.
// Hàm random này sinh ngẫu nhiên số trong phạm vi long long
// Số sinh ra nằm trong [L;R].
long long Rand(long long L, long long R) {
    assert(L <= R);
    return L + rd() % (R - L + 1);
}

int main()
{
	ofstream inp((NAME + ".inp").c_str());
	// long long n=Rand(1,1000);
	long long n=10000;
	// inp<<n<<"\n";
	for(long long i=1;i<=n;i++){inp<<char(Rand('a','z'));}
	inp.close();
}

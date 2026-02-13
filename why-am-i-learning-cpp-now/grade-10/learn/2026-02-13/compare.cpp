#include <iostream>
#include <string>
#include <random>
#include <chrono>
#include <fstream>
#include <cassert>
using namespace std;
// tên bài
const string NAME = "bai2";
// số test kiểm tra
const int NTEST = 25;

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
    srand(time(NULL));
    for (int iTest = 1; iTest <= NTEST; iTest++)
    {
        // ---=== bắt đầu code sinh test ===---
        ofstream inp((NAME + ".inp").c_str());
        long long n=Rand(1,2500);
        inp<<n<<"\n";
        for(long long i=1;i<=n;i++){inp<<Rand(-1000000,1000000)<<" ";}
        inp.close();
		// ---=== kết thúc code sinh test ===---

        // nếu dùng Linux thì "./" + tên chương trình
        system((NAME + ".exe").c_str());
        system((NAME + "_rac.exe").c_str());

        // nếu dùng linux thì thay fc bằng diff
        if (system(("fc " + NAME + ".out " + NAME + "_rac.out").c_str()) != 0)
        {
            cout << "Test " << iTest << ": WRONG!\n";
            return 0;
        }
        cout << "Test " << iTest << ": CORRECT!\n";
    }
    return 0;
}

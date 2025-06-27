#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Các mệnh giá từ nhỏ đến lớn
    vector<int> denominations = {1, 2, 5, 10, 20, 50, 100};
    int m = denominations.size();

    // Mảng lưu số lượng tờ tiền của từng mệnh giá
    vector<int> counts(m, 0);

    // Biến lưu tổng số tiền còn lại cần đổi
    int remaining = N;

    // Xử lý từ mệnh giá cao nhất xuống thấp nhất
    for (int i = m - 1; i >= 0; i--) {
        // Tính số lượng tối đa tờ tiền của mệnh giá hiện tại
        counts[i] = remaining / denominations[i];
        remaining %= denominations[i];

        // Đảm bảo số tờ của mệnh giá lớn hơn không vượt quá mệnh giá nhỏ hơn
        if (i < m - 1 && counts[i] > counts[i + 1]) {
            int excess = counts[i] - counts[i + 1];
            counts[i] -= excess;              // Giảm bớt số tờ ở mệnh giá lớn hơn
            remaining += excess * denominations[i]; // Thêm lại số tiền dư vào tổng
        }
    }
    // In kết quả
    for (int i = m - 1; i >= 0; i--) {
        cout << denominations[i] << " " << counts[i] << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Hàm tính số cặp (i, j) may mắn
long long countLuckyPairs(const vector<int>& a) {
    unordered_map<int, long long> freq;
    long long count = 0;

    // Đếm số lần xuất hiện của từng phần tử
    for (int num : a) {
        freq[num]++;
    }

    // Tính số cặp (x, x) cho các x có tần suất >= 2
    for (auto& entry : freq) {
        long long f = entry.second;
        if (f >= 2) {
            count += (f * (f - 1)) / 2;
        }
    }

    // Đếm các cặp (x, y) với x != y thỏa mãn tính chất may mắn
    for (auto& entry1 : freq) {
        for (auto& entry2 : freq) {
            int x = entry1.first;
            int y = entry2.first;
            if (x < y) {
                // Kiểm tra xem (x, y) có là cặp may mắn
                if ((x * x + y * y) % (x * y) == 0) {
                    count += entry1.second * entry2.second;
                }
            }
        }
    }

    return count;
}

int main() {
    int n;
    // cout << "Nhập số phần tử của mảng: ";
    cin >> n;

    vector<int> a(n);
    // cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long result = countLuckyPairs(a);
    cout << result << endl;

    return 0;
}

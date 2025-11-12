#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("ATRISET.inp");
    ofstream fout("ATRISET.out");
    
    int n;
    fin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        fin >> a[i];
    }
    
    // Sắp xếp mảng
    sort(a.begin(), a.end());
    
    int count = 0;
    int max_sum = -3000000; // Khởi tạo giá trị nhỏ nhất có thể
    
    // Duyệt qua tất cả các cặp (i, j)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Kiểm tra 3 trường hợp
            
            // Trường hợp 1: a_k = 2*a_i - a_j
            int target1 = 2 * a[i] - a[j];
            if (binary_search(a.begin(), a.end(), target1)) {
                // Tìm vị trí của target1, đảm bảo khác i và j
                auto it = lower_bound(a.begin(), a.end(), target1);
                int pos = it - a.begin();
                if (pos != i && pos != j) {
                    count++;
                    max_sum = max(max_sum, a[i] + a[j] + target1);
                }
            }
            
            // Trường hợp 2: a_k = 2*a_j - a_i
            int target2 = 2 * a[j] - a[i];
            if (binary_search(a.begin(), a.end(), target2)) {
                auto it = lower_bound(a.begin(), a.end(), target2);
                int pos = it - a.begin();
                if (pos != i && pos != j) {
                    count++;
                    max_sum = max(max_sum, a[i] + a[j] + target2);
                }
            }
            
            // Trường hợp 3: a_k = (a_i + a_j) / 2
            // Chỉ xét nếu tổng chẵn
            if ((a[i] + a[j]) % 2 == 0) {
                int target3 = (a[i] + a[j]) / 2;
                if (binary_search(a.begin(), a.end(), target3)) {
                    auto it = lower_bound(a.begin(), a.end(), target3);
                    int pos = it - a.begin();
                    if (pos != i && pos != j) {
                        count++;
                        max_sum = max(max_sum, a[i] + a[j] + target3);
                    }
                }
            }
        }
    }
    
    // Vì mỗi bộ được đếm nhiều lần, chia cho số lần trùng
    // Mỗi bộ 3 phần tử có 3 cặp, mỗi cặp tạo ra 2 trường hợp trùng
    // Thực tế mỗi bộ được đếm 3 lần
    count = count / 3;
    
    fout << count << endl;
    fout << max_sum << endl;
    
    fin.close();
    fout.close();
    
    return 0;
}
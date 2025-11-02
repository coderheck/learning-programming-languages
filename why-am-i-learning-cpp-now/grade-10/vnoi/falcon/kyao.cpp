#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;

struct Box {
    ll a, b;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<Box> boxes(N);
    vector<ll> all_vals;
    for (int i = 0; i < N; i++) {
        cin >> boxes[i].a >> boxes[i].b;
        all_vals.push_back(boxes[i].a);
        all_vals.push_back(boxes[i].b);
    }

    // Nén tọa độ
    sort(all_vals.begin(), all_vals.end());
    all_vals.erase(unique(all_vals.begin(), all_vals.end()), all_vals.end());
    auto get_index = [&](ll x) {
        return lower_bound(all_vals.begin(), all_vals.end(), x) - all_vals.begin();
    };

    int M = all_vals.size();
    vector<ll> min_waste(M, INF), count_ways(M, 0);

    // Sắp xếp hộp theo b
    sort(boxes.begin(), boxes.end(), [](const Box &p, const Box &q) {
        return p.b < q.b;
    });

    // Fenwick tree (min, count) trên miền b
    vector<ll> fenw_min(M, INF), fenw_count(M, 0);

    auto update = [&](int idx, ll waste, ll ways) {
        for (int i = idx; i < M; i |= i + 1) {
            if (waste < fenw_min[i]) {
                fenw_min[i] = waste;
                fenw_count[i] = ways;
            } else if (waste == fenw_min[i]) {
                fenw_count[i] = (fenw_count[i] + ways) % MOD;
            }
        }
    };

    auto query = [&](int idx) -> pair<ll, ll> {
        ll best = INF, cnt = 0;
        for (int i = idx; i >= 0; i = (i & (i + 1)) - 1) {
            if (fenw_min[i] < best) {
                best = fenw_min[i];
                cnt = fenw_count[i];
            } else if (fenw_min[i] == best) {
                cnt = (cnt + fenw_count[i]) % MOD;
            }
        }
        return {best, cnt};
    };

    ll global_min_waste = INF, total_ways = 0;

    for (int i = 0; i < N; i++) {
        ll a = boxes[i].a, b = boxes[i].b;
        int idx_a = get_index(a);
        int idx_b = get_index(b);

        // Tìm best trước đó có b >= a
        auto [best_waste, ways] = query(M - 1 - idx_a);

        ll current_waste, current_ways;
        if (best_waste == INF) { // Không có hộp trước
            current_waste = a; // chỉ có mình hộp này
            current_ways = 1;
        } else {
            current_waste = best_waste + (a - b);
            current_ways = ways;
        }

        // Cập nhật vào Fenwick tree tại vị trí idx_b
        update(M - 1 - idx_b, current_waste, current_ways);

        // Cập nhật kết quả toàn cục: nếu đây là hộp cuối của dãy hoàn chỉnh
        // Dãy hoàn chỉnh: không có hộp nào có a <= b_current
        // Tức là không có hộp nào có thể đặt sau nó
        // Với cách sắp xếp theo b, nếu b_current là max? Không, ta cần tìm hộp có b_max < a_any? 
        // Thực tế: hộp cuối là hộp mà không có hộp nào khác có a <= b của nó.
        // Vậy ta cần tìm hộp có b nhỏ hơn tất cả a còn lại? Không, điều kiện là: không tồn tại hộp j có a_j <= b_i.
        // Vì ta sort theo b, nên hộp sau có b lớn hơn, nên nếu từ i trở đi không có hộp nào có a <= b_i, thì i là hộp cuối hoàn chỉnh.
        // Kiểm tra: tìm min_a của các hộp còn lại (từ i+1 đến N-1), nếu min_a > b_i thì i là hộp cuối hoàn chỉnh.
        // Để tránh O(N^2), ta precompute min_a từ cuối.
        // Ở đây, để đơn giản, ta giả sử mọi hộp đều có thể là hộp cuối (và độ lãng phí nhỏ nhất toàn cục là kết quả).
        // Nhưng thực tế, chỉ những hộp không có hộp nào khác có a <= b mới là hộp cuối hoàn chỉnh.
        // Trong code này, ta lấy min của tất cả current_waste làm kết quả, và tổng ways của những cái đạt min.

        // Để chính xác: tại mỗi bước, coi hộp i là hộp cuối, thì waste = current_waste.
        // Nhưng liệu có hộp nào sau i có a <= b_i không? Nếu có thì không phải hoàn chỉnh.
        // Precompute: minA_suffix[i] = min(a[i], a[i+1], ...)
        vector<ll> minA_suffix(N + 1, 1e18);
        for (int j = N - 1; j >= 0; j--) {
            minA_suffix[j] = min(boxes[j].a, minA_suffix[j + 1]);
        }

        if (i == N - 1 || minA_suffix[i + 1] > b) {
            if (current_waste < global_min_waste) {
                global_min_waste = current_waste;
                total_ways = current_ways;
            } else if (current_waste == global_min_waste) {
                total_ways = (total_ways + current_ways) % MOD;
            }
        }
    }

    cout << global_min_waste << " " << total_ways << "\n";

    return 0;
}

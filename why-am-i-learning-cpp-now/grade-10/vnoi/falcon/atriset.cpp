#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	if(fopen("atriset.inp","r")){
		freopen("atriset.inp","r",stdin);
		freopen("atriset.out","w",stdout);
	}
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {cin >> a[i];}
    
    sort(a.begin(), a.end());
    
    int count = 0, max_sum = -3000000;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            
            int target = 2 * a[i] - a[j];
            if (binary_search(a.begin(), a.end(), target)) {
                auto it = lower_bound(a.begin(), a.end(), target);
                int pos = it - a.begin();
                if (pos != i && pos != j) {
                    count++;
                    max_sum = max(max_sum, a[i] + a[j] + target);
                }
            }
            
            target = 2 * a[j] - a[i];
            if (binary_search(a.begin(), a.end(), target)) {
                auto it = lower_bound(a.begin(), a.end(), target);
                int pos = it - a.begin();
                if (pos != i && pos != j) {
                    count++;
                    max_sum = max(max_sum, a[i] + a[j] + target);
                }
            }
            
            if ((a[i] + a[j]) % 2 == 0) {
                target = (a[i] + a[j]) / 2;
                if (binary_search(a.begin(), a.end(), target)) {
                    auto it = lower_bound(a.begin(), a.end(), target);
                    int pos = it - a.begin();
                    if (pos != i && pos != j) {
                        count++;
                        max_sum = max(max_sum, a[i] + a[j] + target);
                    }
                }
            }
        }
    }
    
    count = count / 3;
    
    cout << count << "\n" << max_sum;
    
}

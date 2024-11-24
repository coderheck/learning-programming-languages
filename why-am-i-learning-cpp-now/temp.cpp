#include <iostream>
#include"vector"
using namespace std;
string s;
vector<int>rolling_hash
(
  int window_size,
  int base = 26,
  int mod = 1000000007
)
{
  int n = s.length();
  vector<int> power(n + 1, 1);
  vector<int> hash_values(n - window_size + 1);
  for (int i = 1; i <= n; i++) {
      power[i] = (power[i - 1] * base) % mod;
  }
  int current_hash = 0;
  for (int i = 0; i < window_size; i++) {
      current_hash = (current_hash * base + s[i]) % mod;
  }
  hash_values[0] = current_hash;
  for (int i = 1; i <= n - window_size; i++) {
      current_hash = (
        current_hash - power[window_size - 1] * s[i - 1]
      ) % mod;
      current_hash = (
        current_hash * base + s[i + window_size - 1]
        ) % mod;
      hash_values[i] = current_hash;
  }
  return hash_values;
}

// Driver code
int main()
{
  cin>>s;
	int window_size = 3;
	vector<int> hash_values = rolling_hash(window_size);
	for (auto& val : hash_values) {
		cout << val << " ";
	}
	return 0;
}

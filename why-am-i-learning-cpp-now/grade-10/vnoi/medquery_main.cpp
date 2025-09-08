#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;
#define ll long long 

ll q, x, m;
char t;
priority_queue<ll> lo;
priority_queue<ll, vector<ll>, greater<ll>> hi;
unordered_map<ll, ll> cnt;

void clean() {
	while (!lo.empty() && cnt[lo.top()]) {
		cnt[lo.top()]--;
		lo.pop();
	}
	while (!hi.empty() && cnt[hi.top()]) {
		cnt[hi.top()]--;
		hi.pop();
	}
}

void balanceQueues() {
	while (lo.size() > hi.size() + 1) {
		hi.push(lo.top()); lo.pop();
	}
	while (hi.size() > lo.size()) {
		lo.push(hi.top()); hi.pop();
	}
}

void add() {
	if (lo.empty()) {
		lo.push(x);
	} else {
		m = lo.top();
		if (x <= m) lo.push(x);
		else hi.push(x);
	}
}

void rem() {
	cnt[x]++;
}

int main() {
	cin.tie(nullptr)->sync_with_stdio(0);
	cin >> q;
	while (q--) {
		cin >> t >> x;
		if (t == '+') add();
		else rem();

		clean();           // 👈 dọn rác trước
		balanceQueues();   // 👈 rồi mới cân bằng

		cout << lo.top() << "\n";
	}
}


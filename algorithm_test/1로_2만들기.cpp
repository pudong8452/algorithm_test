#include <iostream>
#include <algorithm>

using namespace std;

int dp[100001];

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		dp[i] = i;
	}
	for (int i = 2; i <= n; i++) {
		if (i % 3 == 0) {
			dp[i] = min(dp[i / 3], dp[i]);
		}
		if (i % 2 == 0) {
			dp[i] = min(dp[i / 2], dp[i]);
		}
		dp[i] = min(dp[i - 1], dp[i])+1;
	}

	cout << dp[i]-1 << '\n';
	return 0;
}
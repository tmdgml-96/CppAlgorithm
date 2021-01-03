#include <iostream>
using namespace std;

int dp[10001];

int main() {

	int n;
	
	cin >> n;

	dp[1] = 1; // 2X1일 때, 한 가지 방법만 존재.
	dp[2] = 3; // 2X2일 때, 세 가지 방법만 존재.
	
	for(int i = 3; i <= n; i++){
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
	}
	cout << dp[n];

	return 0;
}
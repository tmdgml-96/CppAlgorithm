#include <iostream>
using namespace std;

int dp[1001];

int main() {
	int n;
	
	cin >> n;
	
	dp[1] = 1; // n이 1일 때는 한 가지 경우만 존재
	dp[2] = 2; // n이 2일 때는 두 가지 경우만 존재합니다.
	for(int i = 3; i <= n; i++){
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
		// 반복하다보면 자료형의 크기를 넘을 수 있기 때문에
		// 연산할 때마다 10007로 나눈 나머지를 저장해야 합니다.
	}
	cout << dp[n];

	return 0;
}
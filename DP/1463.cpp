#include <iostream>
#include <algorithm>
using namespace std;

// bottom up방식을 이용한다.
// 1을 빼는 계산부터 시작.
// 작은 계산을 통해 미리 배열에 값을 메모이제이션한다.
// 2로 나누거나 3으로 나누는 경우, 최소 값을 배열에 다시 저장.
// 즉, 최소 값이면 값을 갱신한다.

// bottom up 방식을 이용할 땐,
// 배열 초기화를 주어진 크기보다 큰 수로 채워넣는다.

// 1번 규칙일 때, DP[N] = DP[N/3] + 1
// 2번 규칙일 때, DP[N] = DP[N/2] + 1
// 3번 규칙일 때, DP[N] = DP[N-1] +1

int dp[100001];

int main() {

	int X;
	
	cin >> X;
	
	for(int i = 2; i <= X; i++){
		dp[i] = dp[i - 1] + 1;
		if(i % 2 == 0){
			dp[i] = min(dp[i],dp[i / 2] + 1);
		}
		if(i % 3 == 0){
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
	}
	cout << dp[X];

	return 0;
}
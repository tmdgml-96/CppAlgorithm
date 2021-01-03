#include <iostream>
#define MOD 10007

using namespace std;

int dp[1001][10], N, sum;

int main() {

	cin >> N;
	
	//예제 1에서 참고하여 dp[1][i] 부분 1로 초기화
	for(int i = 0; i < 10; i++){
		dp[1][i] = 1;
	}
	
	
	for(int i = 2; i <= N; i++){
		for(int j = 0; j < 10; j++){
			for(int k = j; k < 10; k++){
			 // 더해주기
			  //dp[i][j] += dp[j - 1][k] % MOD;
				dp[i][j] += dp[i - 1][k];
				dp[i][j] %= MOD;
			}
		}
	}
	
	for(int i = 0; i < 10; i++){
		sum = (sum + dp[N][i]) % MOD;
	}
	
	cout << sum % MOD;
	
	return 0;
}
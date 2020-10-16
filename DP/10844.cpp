#include <iostream>
using namespace std;

#define MOD 1000000000
//typedef long long ln;

int dp[101][10];
// 주어지는 N은.. 1 <= N <= 100이고
// 마지막 자리에 올 수 있는 숫자는 0~9이므로

int main() {
	
	int N;
	long long sum = 0;
	
	cin >> N;
	
	// dp[1][i]일 때 1로 초기화
	for(int i = 1; i <= 9; i++){
		dp[1][i] = 1;
	}
	
	for(int i = 2; i <= N; i++){
		for(int j = 0; j <= 9; j++){
			if(j == 0){
				dp[i][j] = dp[i - 1][j + 1];
			}else if(j == 9){
				dp[i][j] = dp[i - 1][j - 1];
			}else{
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
                // 괄호 잊지말기
			}
		}
	}
	
	for (int i = 0; i <= 9; i++){
		sum = (sum + dp[N][i]) % MOD;
	}
	
	cout << sum % MOD;
	
	return 0;
}
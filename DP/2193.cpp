#include <iostream>
using namespace std;

long long dp[91]; // int가 아니라 long long으로 선언해야 저장 가능한 크기를 초과하지 않는다.
int N;

int main() {

	cin >> N;
	
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
    
	for(int i = 4; i <= N; i++){
		dp[i] = dp[i - 1] + dp[i - 2];
	}
		
	
	cout << dp[N];
	
	return 0;
}
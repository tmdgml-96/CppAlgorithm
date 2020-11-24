#include <iostream>
using namespace std;

long long dp[101], T, N;
// ** 메모리를 위해 long long으로 지정해주기

int main() {
	
	cin >> T;
	
	 dp[1] = 1;
	 dp[2] = 1;		
	 dp[3] = 1;
	 dp[4] = 2;
				
	for(int i = 1; i <= T; i++){
		cin >> N;
	
		for(int j = 5; j <= N; j++){
			dp[j] = dp[j - 3] + dp[j - 2]; 
		}
		cout << dp[N] << endl;
	}
	
	return 0;
}
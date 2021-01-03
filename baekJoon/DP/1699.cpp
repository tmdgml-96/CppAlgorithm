#include <iostream>
using namespace std;

int dp[100001];
int Min(int a, int b){
	return a > b ? b : a;
}

int main() {
	
	int n;
	
	cin >> n;
	
	for(int i = 0; i <= n; i++){
		dp[i] = i;
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j * j <= i; j++){
			dp[i] = Min(dp[i - j * j] + 1, dp[i]);
		}
	}
	
	cout << dp[n];
	
	return 0;
}
#include <iostream>
using namespace std;

int arr[300], dp[300];

int Max(int a, int b){
	return a > b ? a : b;
}

int main() {
	
	int n;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		cin >> arr[i];
	}
	
	for(int i = 1; i <= n; i++){
		dp[i] = Max(arr[i] + dp[i - 2], arr[i] + arr[i - 1] + dp[i -3]);
	}
	
	cout << dp[n];

	return 0;
}
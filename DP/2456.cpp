#include <iostream>
using namespace std;

int arr[10001], dp[10001];

int Max(int a, int b){
	return a > b ? a : b;
}

int main()
{

	int n;

	cin >> n;
	
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	
    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
	
	for (int i = 3; i <= n; i++) {
		dp[i]= Max(dp[i - 3] + arr[i] + arr[i - 1], dp[i - 2] + arr[i]);
		dp[i]= Max(dp[i - 1], dp[i]);
		
	}

	cout << dp[n];
}
#include <iostream>
using namespace std;

int arr[100001], dp[100001];

int main() {
	
	int n, max;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){

		cin >> arr[i];
	}
	
	max = arr[1];

	for(int i = 1; i <= n; i++){
		
		if(dp[i - 1] + arr[i] > arr[i]){
			dp[i] = dp[i - 1] + arr[i];
		}else{
			dp[i] = arr[i];
		}
	}
	
	for(int i = 1; i <= n; i++){
		if(max < dp[i]){
			max = dp[i];
		}
	}
	cout << max;
	
	return 0;
}
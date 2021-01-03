#include <iostream>
using namespace std;

int arr[1001], dp[1001];

int main() {
	int n, max = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){
		dp[i] = arr[i];
		
		for(int j = 0; j < i; j++) {
			
			if(arr[i] > arr[j] && dp[i] < dp[j] + arr[i]){
				dp[i] = dp[j] + arr[i];
			}
		}
		if(max < dp[i]){
			max = dp[i];
		}
	}

	cout << max;
	
	return 0;
}
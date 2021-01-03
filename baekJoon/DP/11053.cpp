#include <iostream>
using namespace std;

int dp[1001], arr[1001];

int main(){
	
	int n, max = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	dp[0] = 1;

	for(int i = 0; i < n; i++){
		
        dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(arr[i] > arr[j] && dp[i] <= dp[j]){
				dp[i] = dp[j] + 1;
			}
		}

		if(max < dp[i]){
			max = dp[i];
		}
	}
	
	cout << max;
	
	return 0;
}
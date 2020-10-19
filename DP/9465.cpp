#include <iostream>
using namespace std;

int Max(int a, int b){return a > b ? a : b; }

int dp[2][100001];
int T, n, num;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
    // 이 부분 안 적었을 때는 304ms였고, 적은 후 다시 제출했을 때는 84ms였다.

	cin >> T;
	for(int i = 0; i < T; i++){
		cin >> n;
		
		for(int i = 0; i < 2; i++){
			for(int j = 1; j <= n; j++){
				cin >> dp[i][j];
				//dp[i][j] = num;
			}
		}
		
		for(int j = 2; j <= n; j++){
			dp[0][j] += Max(dp[1][j-1], dp[1][j-2]);
			dp[1][j] += Max(dp[0][j-1], dp[0][j-2]);
		}

		cout << Max(dp[0][n], dp[1][n]) << endl;
	}
	return 0;
}
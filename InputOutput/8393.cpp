#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	int n = 0, sum = 0;
	
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		sum +=i;
	}
	cout << sum;
	
	return 0;
}
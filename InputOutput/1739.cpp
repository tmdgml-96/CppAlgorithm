#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N = 0;
	
	cin >> N;
	
		for(int i = 1; i < 10; i++){
			cout << N << " * " << i << " = " << N * i << '\n';
		} 
	return 0;
}
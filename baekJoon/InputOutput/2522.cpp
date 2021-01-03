#include <iostream>
using namespace std;

int main() {
	
	int N;

	cin >> N;
	
	for(int i = 1; i < N+1; i++){
		for(int k = N - i; k > 0; k--){
			cout << " ";
		}
		for(int j = 0; j <= i - 1; j++){
			cout << "*";
		}
		cout << endl;
	}
	
	for(int i = 1; i < N; i++){
		for(int k = 0; k < i; k++){
			cout << " ";
		}
		for(int j = N; j > i; j--){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	
	int N;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int k = 0; k < i; k++){
			cout << " ";
		}
		for(int j = i; j < N; j++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	
	int N;
	int space = 1;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j <= i; j++){
			cout << "*";
		}
		for(int k = 0; k < (N*2)-(space*2); k++){
			cout << " ";
		}
		for(int z = 0; z <=i; z++){
			cout << "*";
		}
		cout << endl;
		space++;
	}
	
	space = 1;
	
	for(int i = 0; i < N; i++){
		for(int j = N-1; j > i; j--){
			cout << "*";
		}
		for(int k = 0; k < space*2; k++){
			cout << " ";
		}
		for(int z = N-1; z > i; z--){
			cout << "*";
		}
		cout << endl;
		space++;
	}
	return 0;
}
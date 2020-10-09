#include <iostream>
using namespace std;

int main() {
	
	int A = 0, B = 0;
	int testcase = 0;
	char c;
	
	cin >> testcase;
	
	for (int i = 0; i < testcase; i++){
		cin >> A >> c >> B;
		
		cout << A + B << endl;
	}
	return 0;
}
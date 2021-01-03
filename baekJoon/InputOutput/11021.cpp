#include <iostream>
using namespace std;

int main() {
	
	int A = 0, B =0;
	int testcase =0;
	
	cin >> testcase;
	
	for(int i =0; i < testcase; i++){
		cin >> A >> B;
		
		cout << "Case #" << i+1 << ": " << A +B << endl;
	}
	return 0;
}
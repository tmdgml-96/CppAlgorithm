#include <iostream>
using namespace std;

int main() {
	
	int testcase = 0, result = 0;

	cin >> testcase;
	int number[testcase] = {0};
	
	for(int i =0; i < testcase; i++){
		scanf("%1d", &number[i]);
		result += number[i];
	}
	cout << result;
	
	return 0;
}
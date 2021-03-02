#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
	
int main() {
	string s = "";
	string temp;
	int result = 0;
	
	cin >> s;

	for(int i = s.size() - 1; i >= 0; i--){
		temp += s[i];
	}
	
	if(temp == s) result = 1;
	else result = 0;

	cout << result;
	
	return 0;
}
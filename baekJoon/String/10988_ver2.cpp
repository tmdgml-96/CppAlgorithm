#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
	
int main() {
	string s = "";
	string temp;
	int result = 0;
	
	cin >> s;
	temp = s;
    
	reverse(s.begin(), s.end());
	
	if(temp == s) result = 1;
	else result = 0;

	cout << result;
	
	return 0;
}
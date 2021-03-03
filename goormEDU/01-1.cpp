#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>
using namespace std;
int main() {
	char input[100];
	int inputNum = 0, number = 1;
	string temp = "";
	string test = "", result = "";
		
	cin >> inputNum;
	
	while(inputNum > 0){
		cin >> input;
		
		temp = input;
		test = input;
		
		reverse(test.begin(), test.end());

		for(int i = 0; i < temp.size(); i++){
			if(tolower(test[i]) != tolower(temp[i])) {
				result = " NO";
				break;
			}
			else result = " YES";
		}
		cout << "#" << number << result << endl;
		
		inputNum--;
		number++;
	}
	return 0;
}
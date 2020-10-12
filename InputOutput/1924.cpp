#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	string dayoftheweek[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
	int week = 7;
	int x = 0, y = 0;
	int result = 0;
	
	cin >> x >> y;
	
	for(int i = 0; i < x-1; i++){
		y += day[i];
	}
	result = y % week;
	
	cout << dayoftheweek[result];

	return 0;
}
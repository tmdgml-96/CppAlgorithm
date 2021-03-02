#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
	
int main() {
	string s = "";
	int cnt = 0, check = 0;
	
	cin >> s;
	check = s.size();
	string temp[s.size()] = {"",};

	while(check > 0){
		for(int i = cnt; i < s.size(); i++){
			temp[check - 1] += s[i];
		}
		cnt++;
		check--;
	}
	
	sort(temp, temp + s.size());
	for(int i = 0; i < s.size(); i++){
		cout << temp[i] << endl;
	}
	
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s = "", result = "";
	vector<string> sup;
	
	while(true){
		int len = 1;
		bool check = true;
		string temp = "";
		
		cin >> s;
		
		if(s == "*") break;
		
		//if(s.size() <= 2) result = " is surprising.";
		
			while(len < s.size()){
				
				for(int i = 0; i < s.size(); i++){
					temp = "";
					if(i + len >= s.size()) break;
					
					temp += s[i];
					temp += s[i + len];
					
					sup.push_back(temp);
					cout << sup[i] << " ";
				}
				cout << endl;

				for(int i = 0; i < sup.size(); i++){
					//cout << sup[i] << " ";
					for(int j = i + 1; j < sup.size(); j++){
						if(sup[i] == sup[j]){
							check = false;
							break;
						}
					}
					if(!check) break;
				}
				len++;
				sup.clear();
			}
			if(!check){
				cout << s << " is NOT surprising." << endl;
			}else{
				cout << s << " is surprising." << endl;
			}
			//cout << s << result << endl;
			//sup.clear();
	}
	
	return 0;
}
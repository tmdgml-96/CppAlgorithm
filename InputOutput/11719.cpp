#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string text;
	
	while(true){
		
		getline(cin, text);
		
		if(cin.eof() == true){
			break;
			
		}else{
			cout << text << endl;
		}
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	
	int num, tmp_100, tmp_10, tmp_1;
	int cnt = 0;
	
	cin >> num;
	
	if(num > 0 && num < 100){
		cnt = num;
	}else if(num >= 100 && num < 1000){
		cnt = 99;
		for(int i = 111; i <= num; i++){
			tmp_100 = ((i / 10) / 10) % 10;
			tmp_10 = (i / 10) % 10;
			tmp_1 = i % 10;
		
			if(tmp_1 - tmp_10 == tmp_10 - tmp_100){
				cnt++; 
			}
		}
	}else if(num == 1000){
		cnt = 144;
	}
	
	cout << cnt;
	
	return 0;
}
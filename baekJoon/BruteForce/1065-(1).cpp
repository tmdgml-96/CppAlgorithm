#include <iostream>
using namespace std;

int main() {
	int num, tmp_100, tmp_10, tmp_1;
	int cnt = 0;
	
	cin >> num;
	
	for (int i = 1; i <= num; i++){
		if(i < 100){
			cnt = i;
		}
		else if(i > 99 && i < 1000){
			tmp_100 = ((i / 10) / 10) % 10;
			tmp_10 = (i / 10) % 10;
			tmp_1 = i % 10;
		
			if(tmp_1 - tmp_10 == tmp_10 - tmp_100){
				cnt++; 
			}
		}else if( i == 1000){
			cnt = 144;
		}
		
	}
	cout << cnt;
		
	return 0;
}
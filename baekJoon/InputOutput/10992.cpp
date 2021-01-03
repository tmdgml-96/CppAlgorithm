#include <iostream>
using namespace std;

int main() {

	int N;
	int count = 1;
	
	cin >> N;
	
	for (int i = 0; i < N; i++){ // N까지 endl
		
		for(int k = i + 1; k < N; k++){ // 앞쪽에 공백
			cout << " ";
		}
		
		for(int j = 0; j < count; j++){ // 
			if(j == 0 || j == count - 1) {
				cout << "*";
			}
			else{
				cout << " ";
			}
			
			if(count == N * 2 - 1){ // 마지막 몰아서 찍기
				for(int i = 0; i < count - 1; i++){
					cout << "*";
				}
				break;
			}
		}
		cout << endl;
		count+=2;
	}
	return 0;
}
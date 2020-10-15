#include <iostream>
using namespace std;

int N;

int main() {
	
	cin >> N;
	
	for(int i = 0; i < N; i++){  // endl
		
		for(int j = i; j < N - 1; j++){ // 앞쪽 공백
			cout << " ";
		}
		
		// 별 & 공백
		// 만약 3을 입력했다면
		// 01234
		// *    
		// * *
		// * * *
		// 이므로... 짝수일 때 "*" 출력 & 홀수일 때 " " 출력
		for(int k = 0; k <= temp; k++){
			if(k % 2 == 0){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		temp+=2;
		cout << endl;
	}

	return 0;
}
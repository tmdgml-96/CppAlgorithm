#include <iostream>
#include <algorithm>
using namespace std;

int M, N;

int main() {
	
	int temp = 0, max = 0, n = 0;
	
	cin >> N >> M;
	int arr[N][M] = {0,}; 
	int result[N] = {0,};
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i = 0; i < N; i++){
		temp = arr[i][0];
		for(int j = 0; j < M; j++){
			if(temp >= arr[i][j]){
				temp = arr[i][j];
				result[i] = arr[i][j];
			}
		}
	}
	
	n = sizeof(result) / sizeof(result[0]);
	sort(result, result + n, greater<int>());
	
	cout << result[0];
	
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int M, N, K, sum;
int i;

int main() {
	
	int count = 0, n = 0;
	cin >> N >> M >> K;
	int arr[N];
	
	for(int i = 0; i < N; i++){
		cin >> arr[i];
	}
	n = sizeof(arr) / sizeof(arr[0]);
	
	sort(arr, arr + n, greater<int>());
	
	while(count < M){
		
		if(arr[i] == arr[i + 1]){
			sum = arr[0] * M;
			break;
		}else{
			i = 0;
			for(int j = 0; j < K; j++){
				sum += arr[i];
				count++;
			}
			sum += arr[i + 1];
			count++;
		}
		i++;
	}
	
	cout << sum;

	return 0;
}
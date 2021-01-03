#include <iostream>
using namespace std;

int dpStart[1001], dpEnd[1001], arr[1001];

int main() {
	int n, max = 0;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){	
		dpStart[i] = 1;

		for(int j = 0; j < i; j++){	
			if(arr[j] < arr[i] && dpStart[i] <= dpStart[j]){
				dpStart[i] = dpStart[j] + 1;
			}
		}
	}
	
		for(int i = n - 1; i >= 0; i--){
			dpEnd[i] = 1;

		for(int j = n - 1; j >= i; j--){
			if(arr[j] < arr[i] && dpEnd[i] <= dpEnd[j]){
				dpEnd[i] = dpEnd[j] + 1;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		if(max < dpEnd[i] + dpStart[i] - 1){
			max = dpEnd[i] + dpStart[i] - 1;
		}
	}
	
	cout << max;
	
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N = 0;
	int max = -1000000, min = 1000000;
	int temp = 0;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> temp;
		
		if(temp > max){
			max = temp;
		}
		if (temp < min){
			min = temp;
		}
	}
	
	cout << min << " " << max;
	
	return 0;
}
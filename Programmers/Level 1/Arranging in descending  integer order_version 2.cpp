#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0, temp;
    vector<long long> checkN;
    int digit = 1;
    
    while(n > 0){
        temp = n % 10;
        checkN.push_back(temp);
        n = n / 10;
    }
    // --- 이 부분도 정답
    //sort(checkN.begin(), checkN.end());
    //reverse(checkN.begin(), checkN.end());
    
    sort(checkN.rbegin(), checkN.rend());
    
    for(int i = checkN.size() - 1; i >= 0; i--){
        answer += checkN[i] * digit;
        digit *= 10;
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0, temp = 0, xtemp = 0;
    float modNumber = 0.0;
    
    // 자릿수 합 구하기
    xtemp = x;
    while(xtemp > 0){
        temp = xtemp % 10;
        sum += temp;
        xtemp /= 10;
    }
    
    modNumber = x % sum;
    
    if(modNumber != 0.0){
        answer = false;
    }
    
    return answer;
}
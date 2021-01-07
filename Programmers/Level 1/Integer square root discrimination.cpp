#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long countN = 0;
    
    for(long long i = 1; i <= n; ++i){
        if(i * i == n){
            countN = i + 1;
            answer = countN * countN;
            break;
        }else{
            answer = -1;
        }
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int max, min = 0;
    
    if(a > b){
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    
    for(long long i = min; i < max + 1; i++){
        answer += i;
    }
    
    return answer;
}
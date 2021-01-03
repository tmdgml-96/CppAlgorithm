#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    long long tempResult = 0;
    
    for(int i = 0; i < n; i++){
        tempResult += x;
        
        answer.push_back(tempResult);
    }
    return answer;
}
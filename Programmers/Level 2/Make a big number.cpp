#include <string>
#include <vector>

using namespace std;

// 2021.02.25
// 이 문제 체감 난이도 별 다섯 개..
// 언제쯤 쉽게 풀 수 있는 날이 올까?... 포기하지 말고, 지치지도 말고 계속 해보자. 화이팅 :>

string solution(string number, int k) {
    string answer = "";
    char maxN = 0;
    int lenK = number.length() - k;
    int index = -1;
    
    for(int i = 0; i < lenK; i++){
        maxN = 0;
        for(int j = index + 1; j <= k + i; j++){
            if(maxN < number.at(j)){
                index = j;
                maxN = number.at(j);
            }
        }
        answer.push_back(maxN);
    }
    
    return answer;
}
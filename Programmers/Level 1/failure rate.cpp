#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<double, int> a, pair<double, int> b){
    if(a.first == b.first) return a.second < b.second; // 실패율이 같은 경우, stage번호가 작은 것이 앞에 오도록
    return a.first > b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    double total = stages.size();
    vector<pair<double, int>> failureRate;
    int users[501] = {0,};
    
    // 스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수
    for(vector<int>::iterator it = stages.begin(); it != stages.end(); it++){
        users[*it - 1]++;
    }
    
    // 실패율
    for(int i = 0; i < N; i++){
        if(users[i] == 0) failureRate.push_back(make_pair(0, i + 1));
        else failureRate.push_back(make_pair(users[i] / total, i + 1));
        total -= users[i]; // 스테이지에 도달한 플레이어 수
    }

    sort(failureRate.begin(), failureRate.end(), comp);
    
    for(vector<pair<double, int>>::iterator it = failureRate.begin(); it != failureRate.end(); it++){
        answer.push_back(it -> second); // int 값 출력
    }     
    
    return answer;
}

// reference
// https://youtu.be/BbK0YUc4nhY
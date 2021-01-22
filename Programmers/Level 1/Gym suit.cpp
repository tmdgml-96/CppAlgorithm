#include <string>
#include <vector>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int pe[30] = {0, };
    int i = 0;

    for(i = 0; i < n; i++) pe[i] = 1;
    
    i = reserve.size() - 1;
    while(i >= 0){
        pe[reserve[i] - 1]++;
        i--;
    }

    i = lost.size() - 1;
    while(i >= 0){
        pe[lost[i] - 1]--;
        i--;
    }

    for(i = 0; i < n; i++){
        if(pe[i] == 2 && i > 0 && pe[i - 1] == 0) {
            pe[i]--;
            pe[i - 1]++;
        }
        if(pe[i] == 2 && i < n && pe[i + 1] == 0) {
            pe[i]--;
            pe[i + 1]++;
        }
    }
    
    for(i = 0; i < n; i++){
        if (pe[i] > 0) answer++;
    }

    return answer;
}
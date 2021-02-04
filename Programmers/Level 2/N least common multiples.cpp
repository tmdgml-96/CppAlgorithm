#include <string>
#include <vector>
using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    long long multiply = 1;
    int resultCnt = 0, cnt = 1;
    
    for(int i = 0; i < arr.size(); i++){ multiply *= arr[i]; }
    
    while(cnt <= multiply){
        
        for(int i = 0; i < arr.size(); i++){
            if(cnt % arr[i] == 0) resultCnt++;
        }
        
        if(resultCnt == arr.size()){
            answer = cnt;
            break;
        }else resultCnt = 0;
        
        cnt++;
    }
        
    return answer;
}
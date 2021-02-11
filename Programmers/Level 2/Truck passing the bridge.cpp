#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> passingByBridge;
    int weightSum = 0, i = 0 ;
    
    while(true){
        answer++;
        
        if(passingByBridge.size() == bridge_length){
            weightSum -= passingByBridge.front();
            passingByBridge.pop();
        }
        
        if(weightSum + truck_weights[i] <= weight){
            if(i == truck_weights.size() - 1){
                answer += bridge_length;
                break;
            }else{
                passingByBridge.push(truck_weights[i]);
                weightSum += truck_weights[i];
                i++;
            }  
        }else passingByBridge.push(0);
    }
    
    return answer;
}
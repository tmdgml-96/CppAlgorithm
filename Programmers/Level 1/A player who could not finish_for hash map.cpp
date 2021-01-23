#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

// reference
//   https://programmers.co.kr/learn/courses/30/lessons/42576/solution_groups?language=cpp

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    unordered_map<string, int> player;
    
    for(auto element : completion){
        if(player.end() == player.find(element)) player.insert(make_pair(element, 1));
        else player[element]++;
    }
    
    for(auto element : participant){
        if(player.end() == player.find(element)){
            answer = element;
            break;
        }else{
            player[element]--;
            if(player[element] < 0){
                answer = element;
                break;
            }
        }
    }
    
    return answer;
}
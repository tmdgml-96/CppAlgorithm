#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    string Kim = "Kim";
    int count = 0;
    
    for(int i = 0; i < seoul.size(); i++){
        if(seoul[i] == Kim){
            count = i;
			break;
        }
    }
    answer = "김서방은 " + to_string(count) + "에 있다";
    
    return answer;
}
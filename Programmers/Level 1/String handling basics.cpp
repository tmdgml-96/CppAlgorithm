#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int Slength = s.length();
    
    for(int i = 0; i < Slength; i++){ 
        if(Slength != 4 && Slength != 6){
            answer = false;
            break;
        }else{
            if(s.at(i) < 48 || s.at(i) > 57){
                answer = false;
                break;
            }else{
                answer = true;
            }
        }
    }
    
    return answer;
}
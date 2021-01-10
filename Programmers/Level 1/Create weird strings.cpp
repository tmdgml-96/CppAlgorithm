#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    
    for(int i = 0; i < s.size(); i++){
        if(s.at(i) == ' '){
            count = 0;
            answer += ' ';
        }else{
            if(count % 2 == 0){
                answer += toupper(s.at(i));
                count += 1;
            }else{
                answer += tolower(s.at(i));
                count += 1;
            }
        }
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    int temp = 0;
    
    for(char c : s){
        if(c == ' '){
            answer.push_back(' ');
        }
        
        if(c >= 65 && c <= 90){
            if(c + n > 90){
                temp = c + n - 91;
                answer.push_back(temp + 65);
            }else{
                answer.push_back((c + n));
            }
        }
        
        if(c >= 97 && c <= 122){
            if(c + n > 122){
                temp = c + n - 123;
                answer.push_back(temp + 97);
            }else{
                answer.push_back((c + n));
            }
        }
    }
        
    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string temp = "";
    char c = ' ';
    
    for(int i = 0; i < s.size(); i++){
        c = s.at(i);
        if(c >= 97){ //소문자
            answer += s[i];
        }else{
            temp += s[i];
        }
    }
    sort(answer.rbegin(), answer.rend());
    sort(temp.rbegin(), temp.rend());
    
    answer += temp;
    
    return answer;
}
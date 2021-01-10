#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCheck = 0, yCheck = 0;
  // *** 초기화 필수
    
    for(int i = 0; i < s.length(); i++){
        if(s.at(i) == 'P' || s.at(i) == 'p'){
            pCheck += 1;
        }else if(s.at(i) == 'Y' || s.at(i) == 'y'){
            yCheck +=1;
        }
    }
    
    if(pCheck != yCheck){
        answer = false;
    }else{
        answer = true;
    }

    return answer;
}
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCheck = 0, yCheck = 0;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'P' || s[i] == 'p'){
            pCheck += 1;
        }else if(s[i] == 'Y' || s[i] == 'y'){
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
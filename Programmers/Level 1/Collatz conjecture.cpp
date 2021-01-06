#include <string>
#include <vector>

using namespace std;

int solution(int num) { 
    int answer = 0, count = 0;
    long long check;
    
    check = num;
    while(check > 1){
        
        if(check % 2 == 0){
            check = check / 2;
            ++answer;
        }else{
            check = (check * 3) + 1;
            ++answer;
        }
    }
    if (answer >= 500){
        answer = -1;
        //return -1; 
    }
    return answer;
}
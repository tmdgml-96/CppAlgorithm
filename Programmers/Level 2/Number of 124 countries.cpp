#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int modValue = 0;
    int temp = n;
    
    while(n > 0){
        modValue = n % 3;
        
        if(modValue == 0){
            modValue = 4;
            n = n / 3 - 1;
        }else n /= 3;
        
        answer.insert(0, to_string(modValue));
            
    }
    return answer;
}
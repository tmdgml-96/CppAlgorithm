#include <string>
#include <vector>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    string tempfront = "";
    
    for(int i = 0; i < phone_book.size(); i++){
        tempfront = phone_book[i];
        for(int j = 0; j < phone_book.size(); j++){
            if(i != j && phone_book[j].find(tempfront) == 0){
                return false;
            }
        }
    }
    return answer;
}
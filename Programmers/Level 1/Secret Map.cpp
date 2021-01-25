#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string value_temp1 = "", value_temp2 = "";
    int check_map = 0;
    
    for(int i = 0; i < n; i++){
        check_map = arr1.at(i) | arr2.at(i);
        
        for(int j = 0; j < n; j++){
            if(check_map % 2 != 0) value_temp1 += "#";
            else value_temp1 += " ";
            check_map /= 2;
        }
        reverse(value_temp1.begin(), value_temp1.end());
        answer.push_back(value_temp1);
        value_temp1 = "";
    }
    
    return answer;
}
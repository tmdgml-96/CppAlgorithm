#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    vector<int> temp;
    int count = 0;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % divisor == 0){
            temp.push_back(arr[i]);
            count++;
        }
    }
    
    if(count == 0){
        answer.push_back(-1);
    }else{
        sort(temp.begin(), temp.end());
        
        for(int i = 0; i < temp.size(); i++){
            answer.push_back(temp[i]);
        }
    }
    
    return answer;
}
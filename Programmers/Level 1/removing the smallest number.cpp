#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = 0, minIndex = 0;
    
    if(arr.size() == 1){
        answer.push_back(-1);
    }else{
        min = arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(min > arr[i]){
                min = arr[i];
              minIndex = i;
            }
      }
        arr.erase(arr.begin() + minIndex);
    
        answer = arr;
    }
    
    return answer;
}
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int progressesSize = progresses.size();
    int i = 0, complete = 0, day = 0;
    queue<int> count;

    while(progressesSize > 0){
        
        for(int j = progresses[i]; j < 100; j += speeds[i]){
            complete++;
        }    
        i++;
        progressesSize--;
        
        count.push(complete);
        complete = 0;
    }
    
    int work = count.front(), cnt = 1;
    count.pop();
    
    while(!count.empty()){
        if(count.front() <= work){
            count.pop();
            cnt++;
        }else{
            answer.push_back(cnt);
            cnt = 1;
            work = count.front();
            count.pop();
        }
    }
    answer.push_back(cnt);
    
    return answer;
}
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> student1 = {1, 2, 3, 4, 5};  // 5개의 번호로 반복
    vector<int> student2 = {2, 1, 2, 3, 2, 4, 2, 5}; // 8개의 번호로 반복
    vector<int> student3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}; // 10개의 번호로 반복
    vector<int> count(3, 0); // 정답 count 배열 -> {0, 0, 0} 으로 초기화
    int maxCount = 0;
    
    for(int i = 0; i < answers.size(); i++){
        // 정답과 수포자가 찍은 번호와 비교해서 맞은 문제 카운트
        if(answers[i] == student1[i % 5]){
            count[0]++;
            if(count[0] > maxCount) maxCount = count[0];
        }          
        if(answers[i] == student2[i % 8]){
            count[1]++;
            if(count[1] > maxCount) maxCount = count[1];
        }  
        if(answers[i] == student3[i % 10]){
            count[2]++;
            if(count[2] > maxCount) maxCount = count[2];
        }     
    }
        
    for(int i = 0; i < count.size(); i++){
        if(maxCount == count[i]){
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}
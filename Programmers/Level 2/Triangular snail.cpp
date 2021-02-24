#include <string>
#include <vector>

using namespace std;

int temp[1001][1001];

vector<int> solution(int n) {
    vector<int> answer;
    int count = n;
    int x = 0, y = 0, number = 1;
    
    while(count > 0){
        
        // 아래로 이동
        for(int i = 0; i < count; i++){
            temp[++x][y] = number++;
        }
        count--;
        
        // 오른쪽으로 이동
        for(int i = 0; i < count; i++){
            temp[x][++y] = number++;
        }
        count--;
        
        // 위로 이동
        for(int i = 0; i < count; i++){
            temp[--x][--y] = number++;
        }
        count--;
    }
    
    for(int i = 0; i < 1001; i++){
        for(int j = 0; j <= i; j++){
            if(temp[i][j] == 0) break;
            else answer.push_back(temp[i][j]);
        }
    }
    
    return answer;
}
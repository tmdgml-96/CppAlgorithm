using namespace std;

long long GCD(long long a, long long b){
    long long modVal = a % b;
    
    if(b == 0) return a;
    else return GCD(b, modVal);
}

long long solution(int w,int h) {
    long long answer = 1;
    long long longW = w;
    long long longH = h;

    answer = longW * longH - longW - longH + GCD(longW, longH);
    
    return answer;
}
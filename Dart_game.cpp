#include <string>
#include <cmath>


using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int prev = 0;
    int cur = 0;
    
    for (int i = 0; i < dartResult.size(); i++){
        if (isdigit(dartResult[i])){
            answer += cur;
            prev = cur;
            cur = dartResult[i] - '0';
            if (dartResult[i+1] == '0'){
                cur = 10;
                i++;
            }
        }
        if (dartResult[i] == 'D') cur = pow(cur, 2);
        if (dartResult[i] == 'T') cur = pow(cur, 3);
        if (dartResult[i] == '*'){
            answer += prev;
            cur = 2 * cur;
        }
        if (dartResult[i] == '#') cur = cur * -1;
        if (i == dartResult.size() - 1) answer += cur;
    }
    return answer;
}
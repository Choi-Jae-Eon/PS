#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long NUM = num;
    while (NUM != 1){
        if (answer == 500){
            return -1;
        }
        if (NUM % 2 == 0) NUM = NUM / 2;
        else NUM = NUM * 3 + 1;
        answer ++;
    }
    return answer;
}
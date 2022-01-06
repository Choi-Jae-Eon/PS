#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    char max = '0';
    int idx = 0;
    int max_idx = 0;
    int cnt = 0;
    for (int i = 0; i < number.size() - k; i++){
        for (int j = idx; j <= cnt + k; j++){
            if (number[j] > max){
                max = number[j];
                max_idx = j;
            }
        }
        answer += max;
        cnt++;
        idx = max_idx + 1;
        max = '0';
    }
    return answer;
}
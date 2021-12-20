#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int same_number = 0;
    int zero_number = 0;
    for (int i = 0; i < 6; i++){
        if (lottos[i] == 0) zero_number++;
        for (int j = 0; j < 6; j++){
            if (lottos[i] == win_nums[j]){
                same_number++;
                break;
            }
        }
    }
    int first = 7 - (same_number + zero_number);
    if (first == 7) first = 6;
    int last = 7 - same_number;
    if (last == 7) last = 6;
    
    answer.push_back(first);
    answer.push_back(last);
    return answer;
}
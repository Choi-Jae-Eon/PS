#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int next = 0;
    int work_num = 0;
    while (next < progresses.size()){
        for (int i = next; i < progresses.size(); i++)
            progresses[i] += speeds[i];
        if (progresses[next] >= 100){
            while (progresses[next] >= 100 && next < progresses.size()){
                work_num++;
                next++;
            }
            answer.push_back(work_num);
            work_num = 0;
        }
    }
    return answer;
}
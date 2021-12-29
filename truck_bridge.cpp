#include <string>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int cur_weight = 0;
    int cur_truck = 0;
    int truck_num = 0;
    int truck_index = 0;
    queue<int> q;
    
    while (true){
        answer ++;
        if (q.size() == bridge_length){
            cur_truck = q.front();
            q.pop();
            cur_weight -= cur_truck;
            if (cur_truck != 0) truck_num++;
            if (truck_num == truck_weights.size()) break;
        }
        if (weight - cur_weight >= truck_weights[truck_index]){
            q.push(truck_weights[truck_index]);
            cur_weight += truck_weights[truck_index];
            truck_index++;
        }
        else q.push(0);
    }
    
    return answer;
}
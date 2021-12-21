#include <string>
#include <vector>
#include <utility>

using namespace std;
    int dist(pair<int,int> a, pair<int,int> b){
        return (abs(a.first - b.first) + abs(a.second - b.second));
    }

string solution(vector<int> numbers, string hand) {
    string answer = "";
    pair<int,int> position[10] = {make_pair(3,1), make_pair(0,0), make_pair(0,1), make_pair(0,2), make_pair(1,0), make_pair(1,1), make_pair(1,2), make_pair(2,0), make_pair(2,1), make_pair(2,2)};
    pair<int,int> l_position = make_pair(3,0);
    pair<int,int> r_position = make_pair(3,2);
    
    for (int i = 0; i < numbers.size(); i++){
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7){
            answer += 'L';
            l_position = position[numbers[i]];
        }
        else if(numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9){
            answer += 'R';
            r_position = position[numbers[i]];
        }
        else{
            if (dist(l_position, position[numbers[i]]) < dist(r_position, position[numbers[i]])){
                answer += 'L';
                l_position = position[numbers[i]];
            }
            else if (dist(l_position, position[numbers[i]]) > dist(r_position, position[numbers[i]])){
                answer += 'R';
                r_position = position[numbers[i]];
            }
            else{
                if (hand == "left"){
                    answer += 'L';
                    l_position = position[numbers[i]];
                }
            else{
                answer += 'R';
                r_position = position[numbers[i]];
                }
            }
        }
    }
    return answer;
}
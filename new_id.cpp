#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    for (int i = 0; i < new_id.length(); i++)
        if (isalpha(new_id[i])) new_id[i] = tolower(new_id[i]);
    // stage 1
    
    for (int i = 0; i < new_id.size();){
        if (isalpha(new_id[i]) || isdigit(new_id[i]) || new_id[i] =='-' || new_id[i] =='.' || new_id[i] == '_'){
            i ++;
            continue;
        }
        new_id.erase(new_id.begin() + i);
    }
    // stage 2
    
    for (int i = 1; i < new_id.size();){
        if (new_id[i] =='.' && new_id[i-1] == '.')
            new_id.erase(new_id.begin() + i);
        else
            i ++;
    }
    // stage 3
    
    if (new_id[0] == '.') new_id.erase(new_id.begin());
    if (new_id[new_id.size()-1] == '.') new_id.erase(new_id.end()-1);
    // stage 4
    
    if (new_id == "") new_id.push_back('a');
    // stage 5
    
    if (new_id.size() >= 16){
        new_id.erase(new_id.begin() + 15, new_id.end());
        if (new_id[new_id.size()-1] == '.') new_id.erase(new_id.end()-1);
    }
    // stage 6
    
    if (new_id.size() <= 2)
        while (new_id.size() < 3) new_id.push_back(new_id[new_id.size() - 1]);
    // stage 7
    
    answer = new_id;
    return answer;
}
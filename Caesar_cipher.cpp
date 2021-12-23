#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.size(); i++){
        if (s[i] == ' ') answer.push_back(' ');
        else if (s[i] + n > 'z') answer.push_back(s[i] + n - 'z' + 'a' -1);
        else if (s[i] < 'a' && s[i] + n > 'Z') answer.push_back(s[i] + n - 'Z' + 'A' - 1);
        else answer.push_back(s[i] + n);
    }
    return answer;
}
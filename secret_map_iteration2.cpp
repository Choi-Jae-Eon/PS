#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string line;
    for (int i = 0; i < n; i++){
        int result = arr1[i] | arr2[i];
        for (int j = 0; j < n; j++){
            if (result % 2 == 1) line = '#' + line;
            else line = ' ' + line;
            result /= 2;
        }
        answer.push_back(line);
        line.clear();
    }
    return answer;
}
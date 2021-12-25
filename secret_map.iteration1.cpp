#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    int map1[16][16];
    int map2[16][16];
    int map[16][16];
    
    for (int i = 0; i < n; i++){
        int a = arr1[i];
        int b = arr2[i];
        for (int j = 0; j < n; j++){
            map1[i][n-1-j] = a % 2;
            map2[i][n-1-j] = b % 2;
            a /= 2;
            b /= 2;
       }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (map1[i][j] == 1 || map2[i][j] == 1) map[i][j] = 1;
            else map[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++){
        string line;
        for (int j = 0; j < n; j++){
            if (map[i][j] == 1) line += '#';
            else line += ' ';
        }
        answer.push_back(line);
    }
    return answer;
}
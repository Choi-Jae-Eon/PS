#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int snail[1000][1000] = {0,};
    int i = -1;
    int j = 0;
    int cnt = 0;
    int num = 0; 
    while (true){
        for (int k = 0; k < n - cnt; k++){
            num++;
            i++;
            snail[i][j] = num;
        }
        cnt++;
        if (cnt == n) break;
        
        for (int k = 0; k < n - cnt; k++){
            num++;
            j++;
            snail[i][j] = num;
        }
        cnt++;
        if (cnt == n) break;
        
        for (int k = 0; k < n - cnt; k++){
            num++;
            i--;
            j--;
            snail[i][j] = num;
        }
        cnt++;
        if (cnt == n) break;
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (snail[i][j] != 0){
               answer.push_back(snail[i][j]);
            }
        }
    }
  
    return answer;
}
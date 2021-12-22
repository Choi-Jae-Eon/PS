#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket;
    for (int i = 0; i < moves.size(); i++){
        int j = 0;
        while (j < board.size() && board[j][moves[i]-1] == 0) j++;
        if (j == board.size()) continue;
        int doll = board[j][moves[i]-1];
        if (!basket.empty() && basket.back() == doll){
            answer += 2;
            basket.erase(basket.end()-1);
        }
        else 
            basket.push_back(doll);
        board[j][moves[i]-1] = 0;
  }
    return answer;
}
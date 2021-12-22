#include <string>
#include <vector>

using namespace std;
    int Eratos(vector<bool> numbers, int n){
        int answer = 0;
        for (int i = 2; i*i <= n; i++){
            if (numbers[i] == true)
                for (int j = i; i*j <= n; j++)
                    numbers[i*j] = false;
        }
        for (int i = 2; i <= n; i++) if (numbers[i] == true) answer++; 
        return answer;
    }
int solution(int n) {
    int answer = 0;
    vector<bool> numbers;
    for (int i = 0; i <= n; i++) numbers.push_back(true);
    /*numbers = Eratos(numbers, n);
    for (int i = 2; i <= n; i++)
        if (numbers[i] = true) answer++;*/
    answer = Eratos(numbers, n);
    return answer;
}
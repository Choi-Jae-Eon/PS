#include <string>
#include <vector>

using namespace std;
int max(int a, int b){
    if (a > b) return a;
    else return b;
}
int min(int a, int b){
    if (a < b) return a;
    else return b;
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    int a = max(n,m);
    int b = min(n,m);
    int r = 1;
    
    while (r != 0){
        r = a % b;
        a = b;
        b = r;
    }
    answer.push_back(a);
    answer.push_back(n * m/a);
    
    
    return answer;
}
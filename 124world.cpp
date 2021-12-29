#include <string>
#include <vector>
#include <cmath>
using namespace std;

string solution(int n) {
    string answer = "";
    vector<char> r = {'4','1','2'};
    while (n != 0){
        answer = r[n % 3] + answer;
        if (n % 3 == 0) n = (n-1) / 3;
        else n = n / 3;
    }
    return answer;
}
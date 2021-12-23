#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int days = 0;
    vector<int> months = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < a - 1; i++) days += months[i];
    days = days + b - 1;
    days = days % 7;
    if (days == 0) answer += "FRI";
    if (days == 1) answer += "SAT";
    if (days == 2) answer += "SUN";
    if (days == 3) answer += "MON";
    if (days == 4) answer += "TUE";
    if (days == 5) answer += "WED";
    if (days == 6) answer += "THU";
    return answer;
}
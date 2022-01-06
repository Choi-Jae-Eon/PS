#include <string>
#include <vector>

using namespace std;

int ans = 0;
int num[9999999];

bool isPrime(int n){
    if (n == 0 || n == 1) return false;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void perm(vector<int> number, int a){
    int b = 0;
    for (int i = 0; i < number.size(); i++){
        b = number[i];
         if (isPrime(a * 10 + b) && num[a * 10 + b] == 0){
             num[a * 10 + b] = 1;
             ans++;
        }
        vector<int> temp = number;
        temp.erase(temp.begin() + i);
        if (number.size() != 1) perm(temp, a * 10 + b);
    }
}

int solution(string numbers) {
    int answer = 0;
    vector<int> number;
    for (int i = 0; i < numbers.size(); i++) 
        number.push_back(numbers[i] - '0');
    perm(number, 0);
    answer = ans;
    return answer;
}
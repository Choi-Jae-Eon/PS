#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, double> p1, pair<int, double> p2){
    if (p1.second == p2.second) return p1.first < p2. first;
    else return p1.second > p2.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> challengers(N+1);
    vector<double> failers(N+1);
    vector<pair<int,double>> rate(N+1);
    
    for (int i = 0; i < stages.size(); i++){
        int m = stages[i];
        if (m == N + 1){
            m--;
            while (m > 0){
                challengers[m]++;
                m--;
            }
            continue;
        }
        failers[m]++;
        while (m > 0){
            challengers[m]++;
            m--;
        }
    }
    
    for (int i = 1; i <= N; i++){
        if (challengers[i] == 0){
            rate[i].first = i;
            rate[i].second = 0;
        }
        else{
            rate[i].first = i;
            rate[i].second = failers[i]/challengers[i];
        }
    }
    rate.erase(rate.begin());
    sort(rate.begin(), rate.end(), cmp);
    for (int i = 0; i < N; i++) answer.push_back(rate[i].first);
    return answer;
}
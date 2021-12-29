#include <cmath>
using namespace std;


long long solution(int w,int h) {
    
    long long answer = 0;
    long long count = 0;
    for(int x = 0; x < w; x++)
        count += ceil((double)h * (x + 1) / w) - floor((double)h * x / w);
        return (long)h * w - count;
    }
